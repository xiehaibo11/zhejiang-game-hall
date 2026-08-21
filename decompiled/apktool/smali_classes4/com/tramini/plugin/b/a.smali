.class public Lcom/tramini/plugin/b/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tramini/plugin/b/a$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/String;

.field private c:J

.field private d:Ljava/util/List;

.field private e:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tramini/plugin/a/c/c;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:I

.field private o:I

.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 27
    const-class v0, Lcom/tramini/plugin/b/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/b/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/tramini/plugin/b/a;
    .locals 12

    const-string v0, "notifications"

    const-string v1, "p_s"

    .line 236
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    return-object v3

    .line 240
    :cond_0
    new-instance v2, Lcom/tramini/plugin/b/a;

    invoke-direct {v2}, Lcom/tramini/plugin/b/a;-><init>()V

    .line 243
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 245
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->a()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, ""

    .line 1080
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->b:Ljava/lang/String;

    goto :goto_0

    .line 248
    :cond_1
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->a()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 2080
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->b:Ljava/lang/String;

    .line 251
    :goto_0
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->b()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_2

    const-wide/32 v5, 0x36ee80

    .line 2088
    iput-wide v5, v2, Lcom/tramini/plugin/b/a;->c:J

    goto :goto_1

    .line 254
    :cond_2
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->b()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    int-to-long v5, p0

    .line 3088
    iput-wide v5, v2, Lcom/tramini/plugin/b/a;->c:J

    .line 257
    :goto_1
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->c()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    const/4 v5, 0x0

    if-eqz p0, :cond_3

    .line 4072
    iput v5, v2, Lcom/tramini/plugin/b/a;->o:I

    goto :goto_2

    .line 260
    :cond_3
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->c()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 5072
    iput p0, v2, Lcom/tramini/plugin/b/a;->o:I

    .line 263
    :goto_2
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->d()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_4

    .line 264
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->d()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 5193
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->p:Ljava/lang/String;

    .line 267
    :cond_4
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->e()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_5

    .line 268
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->e()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 5201
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->q:Ljava/lang/String;

    .line 271
    :cond_5
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->f()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_6

    .line 272
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->f()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 5209
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->r:Ljava/lang/String;

    .line 275
    :cond_6
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->g()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_7

    .line 276
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->g()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 5217
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->s:Ljava/lang/String;

    .line 279
    :cond_7
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->h()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_a

    .line 280
    new-instance p0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_2

    .line 282
    :try_start_1
    new-instance v6, Lorg/json/JSONObject;

    invoke-static {}, Lcom/tramini/plugin/b/a$a;->h()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-direct {v6, v7}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 283
    invoke-virtual {v6}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v7

    .line 284
    :catch_0
    :goto_3
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v8
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    if-eqz v8, :cond_9

    .line 286
    :try_start_2
    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    .line 287
    new-instance v9, Lcom/tramini/plugin/a/c/c;

    invoke-direct {v9}, Lcom/tramini/plugin/a/c/c;-><init>()V

    .line 288
    invoke-virtual {v6, v8}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v10

    const-string v11, "pml"

    .line 289
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    iput-object v11, v9, Lcom/tramini/plugin/a/c/c;->d:Ljava/lang/String;

    const-string v11, "uu"

    .line 290
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    iput-object v11, v9, Lcom/tramini/plugin/a/c/c;->a:Ljava/lang/String;

    const-string v11, "dmin"

    .line 292
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    iput v11, v9, Lcom/tramini/plugin/a/c/c;->b:I

    const-string v11, "dmax"

    .line 293
    invoke-virtual {v10, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    iput v11, v9, Lcom/tramini/plugin/a/c/c;->c:I

    .line 295
    invoke-virtual {v10, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_8

    invoke-virtual {v10, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_8

    .line 296
    new-instance v11, Lorg/json/JSONArray;

    invoke-virtual {v10, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-direct {v11, v10}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    iput-object v11, v9, Lcom/tramini/plugin/a/c/c;->e:Lorg/json/JSONArray;

    .line 307
    :cond_8
    invoke-virtual {p0, v8, v9}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_3

    .line 6104
    :catch_1
    :cond_9
    :try_start_3
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->e:Ljava/util/concurrent/ConcurrentHashMap;

    .line 318
    :cond_a
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->i()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_c

    .line 319
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->i()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 321
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "p1"

    .line 323
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6113
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->f:Ljava/lang/String;

    const-string p0, "p2"

    .line 324
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6121
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->g:Ljava/lang/String;

    const-string p0, "p3"

    .line 325
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6129
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->h:Ljava/lang/String;

    const-string p0, "p4"

    .line 326
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6137
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->i:Ljava/lang/String;

    const-string p0, "p5"

    .line 327
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6141
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->j:Ljava/lang/String;

    const-string p0, "p6"

    .line 328
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6153
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->k:Ljava/lang/String;

    const-string p0, "p7"

    .line 329
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6161
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->l:Ljava/lang/String;

    const-string p0, "p8"

    .line 330
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6169
    iput-object p0, v2, Lcom/tramini/plugin/b/a;->m:Ljava/lang/String;

    .line 332
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_c

    .line 333
    new-instance p0, Lorg/json/JSONArray;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 334
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_c

    .line 336
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, v0}, Ljava/util/ArrayList;-><init>(I)V

    move v6, v5

    :goto_4
    if-ge v6, v0, :cond_b

    .line 338
    invoke-virtual {p0, v6}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v1, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v6, v6, 0x1

    goto :goto_4

    .line 7096
    :cond_b
    iput-object v1, v2, Lcom/tramini/plugin/b/a;->d:Ljava/util/List;

    .line 345
    :cond_c
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->j()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_d

    .line 7177
    iput v5, v2, Lcom/tramini/plugin/b/a;->n:I

    goto :goto_5

    .line 348
    :cond_d
    invoke-static {}, Lcom/tramini/plugin/b/a$a;->j()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 8177
    iput p0, v2, Lcom/tramini/plugin/b/a;->n:I
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_2

    :goto_5
    return-object v2

    :catch_2
    return-object v3
.end method

.method private a(I)V
    .locals 0

    .line 72
    iput p1, p0, Lcom/tramini/plugin/b/a;->o:I

    return-void
.end method

.method private a(J)V
    .locals 0

    .line 88
    iput-wide p1, p0, Lcom/tramini/plugin/b/a;->c:J

    return-void
.end method

.method private a(Ljava/util/List;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->d:Ljava/util/List;

    return-void
.end method

.method private a(Ljava/util/concurrent/ConcurrentHashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tramini/plugin/a/c/c;",
            ">;)V"
        }
    .end annotation

    .line 104
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->e:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method private b(I)V
    .locals 0

    .line 177
    iput p1, p0, Lcom/tramini/plugin/b/a;->n:I

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->b:Ljava/lang/String;

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->f:Ljava/lang/String;

    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->g:Ljava/lang/String;

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 0

    .line 129
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->h:Ljava/lang/String;

    return-void
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->i:Ljava/lang/String;

    return-void
.end method

.method private g(Ljava/lang/String;)V
    .locals 0

    .line 141
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->j:Ljava/lang/String;

    return-void
.end method

.method private h(Ljava/lang/String;)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->k:Ljava/lang/String;

    return-void
.end method

.method private i(Ljava/lang/String;)V
    .locals 0

    .line 161
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->l:Ljava/lang/String;

    return-void
.end method

.method private j(Ljava/lang/String;)V
    .locals 0

    .line 169
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->m:Ljava/lang/String;

    return-void
.end method

.method private k(Ljava/lang/String;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->p:Ljava/lang/String;

    return-void
.end method

.method private l(Ljava/lang/String;)V
    .locals 0

    .line 201
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->q:Ljava/lang/String;

    return-void
.end method

.method private m(Ljava/lang/String;)V
    .locals 0

    .line 209
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->r:Ljava/lang/String;

    return-void
.end method

.method private n(Ljava/lang/String;)V
    .locals 0

    .line 217
    iput-object p1, p0, Lcom/tramini/plugin/b/a;->s:Ljava/lang/String;

    return-void
.end method

.method private p()Ljava/lang/String;
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->k:Ljava/lang/String;

    return-object v0
.end method

.method private q()Ljava/lang/String;
    .locals 1

    .line 205
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->r:Ljava/lang/String;

    return-object v0
.end method

.method private r()Ljava/lang/String;
    .locals 1

    .line 213
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->s:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/tramini/plugin/b/a;->o:I

    return v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c()J
    .locals 2

    .line 84
    iget-wide v0, p0, Lcom/tramini/plugin/b/a;->c:J

    return-wide v0
.end method

.method public final d()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 92
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->d:Ljava/util/List;

    return-object v0
.end method

.method public final e()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tramini/plugin/a/c/c;",
            ">;"
        }
    .end annotation

    .line 100
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->e:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->f:Ljava/lang/String;

    return-object v0
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    .line 133
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->i:Ljava/lang/String;

    return-object v0
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->j:Ljava/lang/String;

    return-object v0
.end method

.method public final k()Ljava/lang/String;
    .locals 1

    .line 157
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->l:Ljava/lang/String;

    return-object v0
.end method

.method public final l()Ljava/lang/String;
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->m:Ljava/lang/String;

    return-object v0
.end method

.method public final m()I
    .locals 1

    .line 173
    iget v0, p0, Lcom/tramini/plugin/b/a;->n:I

    return v0
.end method

.method public final n()Ljava/lang/String;
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->p:Ljava/lang/String;

    return-object v0
.end method

.method public final o()Ljava/lang/String;
    .locals 1

    .line 197
    iget-object v0, p0, Lcom/tramini/plugin/b/a;->q:Ljava/lang/String;

    return-object v0
.end method
