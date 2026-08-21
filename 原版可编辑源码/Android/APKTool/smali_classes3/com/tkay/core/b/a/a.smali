.class public final Lcom/tkay/core/b/a/a;
.super Lcom/tkay/core/common/h/a;


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:Ljava/lang/String; = "ex_pkg"


# instance fields
.field private final A:Ljava/lang/String;

.field private final B:Ljava/lang/String;

.field private final C:Ljava/lang/String;

.field private final D:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:Ljava/lang/String;

.field g:Ljava/lang/String;

.field h:Ljava/lang/String;

.field i:Ljava/lang/String;

.field j:Ljava/lang/String;

.field k:I

.field l:I

.field p:I

.field q:Ljava/lang/String;

.field r:Ljava/lang/String;

.field s:Ljava/lang/String;

.field private t:I

.field private final u:Ljava/lang/String;

.field private final v:Ljava/lang/String;

.field private final w:Ljava/lang/String;

.field private final x:Ljava/lang/String;

.field private final y:Ljava/lang/String;

.field private final z:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;I)V"
        }
    .end annotation

    .line 77
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    const/4 v0, 0x0

    .line 40
    iput v0, p0, Lcom/tkay/core/b/a/a;->t:I

    const-string v0, "hb_list"

    .line 42
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->u:Ljava/lang/String;

    const-string v0, "request_id"

    .line 43
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->v:Ljava/lang/String;

    const-string v0, "ch_info"

    .line 44
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->w:Ljava/lang/String;

    const-string v0, "wf"

    .line 45
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->x:Ljava/lang/String;

    const-string v0, "np"

    .line 46
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->y:Ljava/lang/String;

    const-string v0, "hb_size"

    .line 47
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->z:Ljava/lang/String;

    const-string v0, "last_wf"

    .line 49
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->A:Ljava/lang/String;

    const-string v0, "co"

    .line 50
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->B:Ljava/lang/String;

    const-string v0, "adx_ext"

    .line 51
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->C:Ljava/lang/String;

    const-string v0, "debug"

    .line 52
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->D:Ljava/lang/String;

    .line 78
    iput-object p3, p0, Lcom/tkay/core/b/a/a;->d:Ljava/lang/String;

    .line 79
    iput-object p1, p0, Lcom/tkay/core/b/a/a;->g:Ljava/lang/String;

    .line 80
    iput-object p2, p0, Lcom/tkay/core/b/a/a;->h:Ljava/lang/String;

    .line 81
    iput p5, p0, Lcom/tkay/core/b/a/a;->t:I

    .line 83
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1}, Lorg/json/JSONArray;-><init>()V

    .line 84
    invoke-interface {p4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result p4

    if-eqz p4, :cond_0

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lorg/json/JSONObject;

    .line 85
    invoke-virtual {p1, p4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 88
    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/a/a;->e:Ljava/lang/String;

    .line 90
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 92
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->P()I

    move-result p2

    iput p2, p0, Lcom/tkay/core/b/a/a;->k:I

    .line 93
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->af()I

    move-result p1

    iput p1, p0, Lcom/tkay/core/b/a/a;->l:I

    :cond_1
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 100
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/a/a;->f:Ljava/lang/String;

    .line 103
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const-string v0, "[]"

    if-nez p1, :cond_1

    invoke-static {v0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 104
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/a/a;->i:Ljava/lang/String;

    .line 106
    :cond_1
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-static {v0, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 107
    invoke-virtual {p3}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/a/a;->j:Ljava/lang/String;

    :cond_2
    return-void
.end method

.method private d(I)V
    .locals 0

    .line 143
    iput p1, p0, Lcom/tkay/core/b/a/a;->p:I

    return-void
.end method


# virtual methods
.method protected final a()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation

    .line 368
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/core/b/a/b;)V
    .locals 2

    .line 116
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 117
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/a/a;->f:Ljava/lang/String;

    .line 120
    :cond_0
    iget v0, p1, Lcom/tkay/core/b/a/b;->f:I

    iput v0, p0, Lcom/tkay/core/b/a/a;->p:I

    .line 122
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "[]"

    if-nez v0, :cond_1

    iget-object v0, p1, Lcom/tkay/core/b/a/b;->b:Ljava/lang/String;

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 123
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/a/a;->i:Ljava/lang/String;

    .line 125
    :cond_1
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p1, Lcom/tkay/core/b/a/b;->c:Ljava/lang/String;

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 126
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->c:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/a/a;->j:Ljava/lang/String;

    .line 128
    :cond_2
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p1, Lcom/tkay/core/b/a/b;->d:Ljava/lang/String;

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 129
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->d:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/a/a;->q:Ljava/lang/String;

    .line 131
    :cond_3
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p1, Lcom/tkay/core/b/a/b;->e:Ljava/lang/String;

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 132
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->e:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/a/a;->r:Ljava/lang/String;

    :cond_4
    const-string v0, ""

    .line 134
    iput-object v0, p0, Lcom/tkay/core/b/a/a;->s:Ljava/lang/String;

    .line 136
    iget-object v0, p1, Lcom/tkay/core/b/a/b;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 137
    iget-object p1, p1, Lcom/tkay/core/b/a/b;->g:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/l/c;->a([B)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/a/a;->s:Ljava/lang/String;

    :cond_5
    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/tkay/core/b/a/a;->g:Ljava/lang/String;

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 0

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

    .line 159
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 161
    iget v1, p0, Lcom/tkay/core/b/a/a;->t:I

    if-nez v1, :cond_0

    const-string v1, "Accept-Encoding"

    const-string v2, "gzip"

    .line 162
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 165
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 1

    .line 171
    invoke-virtual {p0}, Lcom/tkay/core/b/a/a;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method protected final e()Lorg/json/JSONObject;
    .locals 4

    .line 201
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v0

    :try_start_0
    const-string v1, "app_id"

    .line 203
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pl_id"

    .line 204
    iget-object v2, p0, Lcom/tkay/core/b/a/a;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "session_id"

    .line 205
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/b/a/a;->h:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "t_g_id"

    .line 206
    iget v2, p0, Lcom/tkay/core/b/a/a;->k:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "gro_id"

    .line 207
    iget v2, p0, Lcom/tkay/core/b/a/a;->l:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 210
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object v1

    .line 211
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "sy_id"

    .line 212
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 215
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->y()Ljava/lang/String;

    move-result-object v1

    .line 216
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "bk_id"

    if-nez v2, :cond_1

    .line 217
    :try_start_1
    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 219
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->j(Ljava/lang/String;)V

    .line 220
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 224
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_2

    const-string v1, "deny"

    .line 225
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/d;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 228
    :cond_2
    iget v1, p0, Lcom/tkay/core/b/a/a;->t:I

    if-nez v1, :cond_3

    const-string v1, "misk_spt"

    .line 230
    invoke-static {}, Lcom/tkay/core/common/p;->a()Lcom/tkay/core/common/p;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/p;->c()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "misk_pt_det"

    .line 231
    invoke-static {}, Lcom/tkay/core/common/p;->a()Lcom/tkay/core/common/p;

    invoke-static {}, Lcom/tkay/core/common/p;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "al_it_apil"

    .line 235
    invoke-static {}, Lcom/tkay/core/common/n;->a()Lcom/tkay/core/common/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/n;->c()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 238
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->h:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/core/common/h/c;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_4

    const-string v2, "customs"

    .line 240
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 244
    :cond_4
    invoke-static {v0}, Lcom/tkay/core/common/h/c;->a(Lorg/json/JSONObject;)V

    .line 247
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    .line 249
    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/b/a/a;->h:Ljava/lang/String;

    if-eqz v0, :cond_6

    .line 1407
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_5

    goto :goto_1

    .line 1416
    :cond_5
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 1417
    invoke-virtual {v1, v2}, Lcom/tkay/core/c/e;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 1419
    invoke-virtual {v1}, Lcom/tkay/core/c/d;->ax()Lorg/json/JSONObject;

    move-result-object v1

    if-eqz v1, :cond_6

    const-string v2, "p_c"

    .line 1421
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_6
    :goto_1
    return-object v0
.end method

.method protected final f()Lorg/json/JSONObject;
    .locals 3

    .line 258
    invoke-super {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v0

    .line 261
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "btts"

    .line 262
    invoke-static {}, Lcom/tkay/core/common/l/d;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-object v0
.end method

.method protected final g()Ljava/lang/String;
    .locals 5

    .line 296
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 297
    invoke-virtual {p0}, Lcom/tkay/core/b/a/a;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 298
    invoke-virtual {p0}, Lcom/tkay/core/b/a/a;->f()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "p"

    .line 300
    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "p2"

    .line 301
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 303
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->e:Ljava/lang/String;

    const-string v2, "hb_list"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 304
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->d:Ljava/lang/String;

    const-string v2, "request_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 305
    iget v1, p0, Lcom/tkay/core/b/a/a;->p:I

    if-lez v1, :cond_0

    .line 306
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "hb_size"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 309
    :cond_0
    iget v1, p0, Lcom/tkay/core/b/a/a;->t:I

    if-nez v1, :cond_7

    .line 310
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->f:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 311
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->f:Ljava/lang/String;

    const-string v2, "ch_info"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 313
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->i:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 314
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->i:Ljava/lang/String;

    const-string v2, "wf"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 316
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->j:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 317
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->j:Ljava/lang/String;

    const-string v2, "np"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 319
    :cond_3
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->q:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 320
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->q:Ljava/lang/String;

    const-string v2, "last_wf"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 322
    :cond_4
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->r:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 323
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->r:Ljava/lang/String;

    const-string v2, "co"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 325
    :cond_5
    iget-object v1, p0, Lcom/tkay/core/b/a/a;->s:Ljava/lang/String;

    const-string v2, "adx_ext"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 328
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 329
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->k()Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "ex_pkg"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 333
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->t()Z

    move-result v1

    if-eqz v1, :cond_7

    const/4 v1, 0x1

    .line 334
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "debug"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 340
    :cond_7
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    .line 341
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 343
    :try_start_0
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 344
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 346
    :cond_8
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 350
    :catch_0
    invoke-static {}, Ljava/lang/System;->gc()V

    :catch_1
    const/4 v0, 0x0

    return-object v0
.end method

.method protected final h()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final i()Landroid/content/Context;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final j()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final k()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

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
