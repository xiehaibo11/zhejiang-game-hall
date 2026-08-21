.class public Lcom/tkay/core/common/h/o;
.super Lcom/tkay/core/common/h/a;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field public static final d:I = 0x4

.field public static final e:I = 0x5

.field public static final f:I = 0x6

.field public static final g:I = 0x7

.field public static final h:I = 0x8

.field public static final i:I = 0x9

.field public static final j:I = 0xa

.field public static final k:I = 0xb

.field public static final l:I = 0xc

.field public static final p:I = 0xd

.field public static final q:I = 0xf

.field public static final r:I = 0x10

.field public static final s:I = 0x12

.field public static final t:I = 0x13

.field public static final u:I = 0x14

.field public static final v:I = 0x15

.field private static final x:Ljava/lang/String;


# instance fields
.field private A:Ljava/lang/String;

.field private B:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/e;",
            ">;"
        }
    .end annotation
.end field

.field private C:Lcom/tkay/core/common/f/e;

.field private D:I

.field w:Z

.field private y:Landroid/content/Context;

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 37
    const-class v0, Lcom/tkay/core/common/h/o;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/h/o;->x:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;ILjava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/e;",
            ">;)V"
        }
    .end annotation

    .line 76
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const/4 v0, 0x0

    .line 72
    iput-boolean v0, p0, Lcom/tkay/core/common/h/o;->w:Z

    .line 78
    iput-object p1, p0, Lcom/tkay/core/common/h/o;->y:Landroid/content/Context;

    .line 79
    iput p2, p0, Lcom/tkay/core/common/h/o;->D:I

    .line 81
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/o;->z:Ljava/lang/String;

    .line 82
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/h/o;->A:Ljava/lang/String;

    .line 84
    iput-object p3, p0, Lcom/tkay/core/common/h/o;->B:Ljava/util/List;

    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 2

    .line 243
    iget-boolean v0, p0, Lcom/tkay/core/common/h/o;->w:Z

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    :try_start_0
    const-string v0, "ofl"

    const/4 v1, 0x1

    .line 245
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 247
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation

    .line 256
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 10

    .line 263
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 264
    invoke-virtual {p0}, Lcom/tkay/core/common/h/o;->c()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 267
    :try_start_0
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 268
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 275
    :catch_0
    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 p1, 0x1

    .line 276
    iput-boolean p1, p0, Lcom/tkay/core/common/h/o;->w:Z

    .line 277
    invoke-virtual {p0}, Lcom/tkay/core/common/h/o;->g()Ljava/lang/String;

    move-result-object v8

    const/4 p1, 0x0

    .line 278
    iput-boolean p1, p0, Lcom/tkay/core/common/h/o;->w:Z

    .line 279
    invoke-virtual {p0}, Lcom/tkay/core/common/h/o;->b()Ljava/lang/String;

    move-result-object v6

    const/16 p1, 0x3e8

    .line 281
    invoke-static {p1}, Lcom/tkay/core/common/f/n;->a(I)Ljava/lang/String;

    move-result-object v9

    .line 283
    invoke-static {}, Lcom/tkay/core/common/u;->a()Lcom/tkay/core/common/u;

    move-result-object v4

    const/4 v5, 0x1

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/core/common/u;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/tkay/core/common/h/o;->C:Lcom/tkay/core/common/f/e;

    if-eqz v0, :cond_0

    .line 108
    iget-object v0, v0, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    .line 1141
    iget-object v0, v0, Lcom/tkay/core/common/f/ai;->ao:Ljava/lang/String;

    return-object v0

    .line 110
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    invoke-static {}, Lcom/tkay/core/common/i;->j()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 8

    .line 139
    iget-object v0, p0, Lcom/tkay/core/common/h/o;->B:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 140
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 142
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0}, Lcom/tkay/core/common/h/o;->b()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    const-string v1, "tk"

    const-string v7, "0"

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final c()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 115
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 116
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 117
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 1

    .line 123
    invoke-virtual {p0}, Lcom/tkay/core/common/h/o;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/h/o;->c(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 6

    .line 168
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    .line 169
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v1

    :try_start_0
    const-string v2, "app_id"

    .line 172
    iget-object v3, p0, Lcom/tkay/core/common/h/o;->z:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "tcp_tk_da_type"

    .line 173
    iget v3, p0, Lcom/tkay/core/common/h/o;->D:I

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 174
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 175
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 176
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 177
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 180
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_3

    .line 182
    :try_start_1
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    if-lez v2, :cond_3

    if-eqz v1, :cond_3

    .line 184
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 185
    invoke-interface {v1}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 186
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_1

    .line 188
    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    :cond_2
    const-string v1, "custom"

    .line 191
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :catchall_0
    :cond_3
    return-object v0
.end method

.method protected final g()Ljava/lang/String;
    .locals 5

    .line 208
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 209
    invoke-virtual {p0}, Lcom/tkay/core/common/h/o;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 211
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 213
    iget-object v3, p0, Lcom/tkay/core/common/h/o;->B:Ljava/util/List;

    if-eqz v3, :cond_0

    .line 214
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/e;

    .line 215
    invoke-virtual {v4}, Lcom/tkay/core/common/f/e;->a()Lorg/json/JSONObject;

    move-result-object v4

    .line 216
    invoke-direct {p0, v4}, Lcom/tkay/core/common/h/o;->a(Lorg/json/JSONObject;)V

    .line 217
    invoke-virtual {v2, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 219
    :cond_0
    iget-object v3, p0, Lcom/tkay/core/common/h/o;->C:Lcom/tkay/core/common/f/e;

    if-eqz v3, :cond_1

    .line 220
    invoke-virtual {v3}, Lcom/tkay/core/common/f/e;->a()Lorg/json/JSONObject;

    move-result-object v3

    .line 221
    invoke-direct {p0, v3}, Lcom/tkay/core/common/h/o;->a(Lorg/json/JSONObject;)V

    .line 222
    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 224
    :cond_1
    invoke-virtual {v2}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 225
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/core/common/h/o;->A:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "api_ver=1.0&common="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "&data="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/common/l/f;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    :try_start_0
    const-string v4, "common"

    .line 230
    invoke-virtual {v0, v4, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 231
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "api_ver"

    const-string v2, "1.0"

    .line 232
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sign"

    .line 233
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 235
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 238
    :goto_1
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/core/common/h/o;->z:Ljava/lang/String;

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/tkay/core/common/h/o;->y:Landroid/content/Context;

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/tkay/core/common/h/o;->A:Ljava/lang/String;

    return-object v0
.end method

.method protected final k()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0"

    return-object v0
.end method

.method protected final l()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final m()I
    .locals 1

    const/4 v0, 0x6

    return v0
.end method

.method protected final o()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
