.class public final Lcom/tkay/core/b/i;
.super Lcom/tkay/core/b/b;


# instance fields
.field A:Z

.field w:Ljava/lang/String;

.field x:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field y:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field z:Z


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 5

    .line 42
    invoke-direct {p0, p1}, Lcom/tkay/core/b/b;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 44
    iget v0, p1, Lcom/tkay/core/common/f/ag;->f:I

    .line 46
    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/b/i;->i:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/b/i;->j:Ljava/lang/String;

    const/4 v4, 0x0

    invoke-static {v1, v2, v3, v0, v4}, Lcom/tkay/core/common/l/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;II)Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/i;->w:Ljava/lang/String;

    .line 48
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    if-nez v0, :cond_0

    .line 49
    new-instance p1, Ljava/util/ArrayList;

    const/4 v0, 0x4

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/core/b/i;->x:Ljava/util/List;

    .line 50
    new-instance p1, Ljava/util/ArrayList;

    const/4 v0, 0x1

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/core/b/i;->y:Ljava/util/List;

    return-void

    .line 52
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    iput-object v0, p0, Lcom/tkay/core/b/i;->x:Ljava/util/List;

    .line 53
    new-instance v0, Ljava/util/ArrayList;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    invoke-direct {v0, p1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    iput-object v0, p0, Lcom/tkay/core/b/i;->y:Ljava/util/List;

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 13

    .line 126
    iget-object v0, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/w;->b(Ljava/lang/String;)I

    move-result v0

    .line 131
    iget-object v1, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 132
    iget-object v1, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/ae;->c()Ljava/lang/Boolean;

    move-result-object v1

    .line 133
    iget-object v3, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v3, v3, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/ae;->a()Ljava/lang/String;

    move-result-object v3

    .line 134
    iget-object v4, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v4, v4, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/ae;->b()Z

    move-result v4

    goto :goto_0

    :cond_0
    const-string v3, ""

    const/4 v4, 0x1

    move-object v1, v2

    .line 137
    :goto_0
    iget-object v5, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    iget-object v6, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget v6, v6, Lcom/tkay/core/common/j;->d:I

    iget-object v7, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget v7, v7, Lcom/tkay/core/common/f/ag;->v:I

    iget-boolean v8, p0, Lcom/tkay/core/b/i;->z:Z

    iget-boolean v9, p0, Lcom/tkay/core/b/i;->A:Z

    iget-object v10, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v10, v10, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    .line 142
    invoke-static {v10}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result v10

    .line 3024
    new-instance v11, Lcom/tkay/core/common/f/g;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v12

    invoke-direct {v11, v12, v2}, Lcom/tkay/core/common/f/g;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "1004684"

    .line 3025
    iput-object v2, v11, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    .line 3026
    invoke-virtual {v5}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v11, Lcom/tkay/core/common/f/g;->b:Ljava/lang/String;

    .line 3027
    invoke-virtual {v5}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v11, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    .line 3028
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v11, Lcom/tkay/core/common/f/g;->k:Ljava/lang/String;

    .line 3029
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v11, Lcom/tkay/core/common/f/g;->m:Ljava/lang/String;

    .line 3030
    invoke-virtual {v5}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v11, Lcom/tkay/core/common/f/g;->n:Ljava/lang/String;

    const-string v0, "1"

    const-string v2, "2"

    if-eqz v4, :cond_1

    move-object v4, v0

    goto :goto_1

    :cond_1
    move-object v4, v2

    .line 3031
    :goto_1
    iput-object v4, v11, Lcom/tkay/core/common/f/g;->o:Ljava/lang/String;

    .line 3033
    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v11, Lcom/tkay/core/common/f/g;->p:Ljava/lang/String;

    .line 3035
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 3036
    iput-object p2, v11, Lcom/tkay/core/common/f/g;->q:Ljava/lang/String;

    .line 3038
    :cond_2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 3039
    iput-object p1, v11, Lcom/tkay/core/common/f/g;->r:Ljava/lang/String;

    :cond_3
    if-nez v1, :cond_4

    const-string p1, "0"

    goto :goto_2

    .line 3045
    :cond_4
    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    if-eqz p1, :cond_5

    move-object p1, v0

    goto :goto_2

    :cond_5
    move-object p1, v2

    :goto_2
    iput-object p1, v11, Lcom/tkay/core/common/f/g;->s:Ljava/lang/String;

    .line 3048
    iput-object v3, v11, Lcom/tkay/core/common/f/g;->t:Ljava/lang/String;

    if-eqz v8, :cond_6

    move-object p1, v0

    goto :goto_3

    :cond_6
    move-object p1, v2

    .line 3050
    :goto_3
    iput-object p1, v11, Lcom/tkay/core/common/f/g;->u:Ljava/lang/String;

    if-eqz v9, :cond_7

    move-object p1, v0

    goto :goto_4

    :cond_7
    move-object p1, v2

    .line 3051
    :goto_4
    iput-object p1, v11, Lcom/tkay/core/common/f/g;->v:Ljava/lang/String;

    .line 3052
    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v11, Lcom/tkay/core/common/f/g;->w:Ljava/lang/String;

    if-eqz v10, :cond_8

    goto :goto_5

    :cond_8
    move-object v0, v2

    .line 3053
    :goto_5
    iput-object v0, v11, Lcom/tkay/core/common/f/g;->x:Ljava/lang/String;

    .line 3056
    invoke-static {v11}, Lcom/tkay/core/common/k/c;->b(Lcom/tkay/core/common/f/g;)V

    return-void
.end method

.method private a(Lorg/json/JSONArray;)V
    .locals 4

    .line 189
    iget-object v0, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 190
    iget-object v0, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 192
    iget-object v2, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 195
    iget-object v3, p0, Lcom/tkay/core/b/i;->j:Ljava/lang/String;

    invoke-static {v3, v2}, Lcom/tkay/core/common/l/t;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 196
    new-instance v3, Lcom/tkay/core/common/f/am$a;

    invoke-direct {v3, v2}, Lcom/tkay/core/common/f/am$a;-><init>(Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v3}, Lcom/tkay/core/common/f/am$a;->a()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {p1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(Lorg/json/JSONArray;Lorg/json/JSONArray;)V
    .locals 8

    .line 203
    iget-object v0, p0, Lcom/tkay/core/b/i;->x:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 206
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    .line 208
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    .line 211
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "ad_source_id"

    .line 212
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "price"

    .line 213
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide v6

    invoke-virtual {v4, v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 214
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v5

    if-eqz v5, :cond_0

    const-string v6, "tp_bid_id"

    .line 216
    iget-object v5, v5, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {v4, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v5, "s_pty"

    .line 218
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->af()D

    move-result-wide v6

    invoke-virtual {v4, v5, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 219
    invoke-virtual {p2, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v3

    .line 221
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 229
    :cond_1
    iget-object p2, p0, Lcom/tkay/core/b/i;->y:Ljava/util/List;

    if-eqz p2, :cond_3

    .line 231
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_2
    :goto_2
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 233
    iget-object v1, p0, Lcom/tkay/core/b/i;->j:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/tkay/core/common/l/t;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 234
    new-instance v1, Lcom/tkay/core/common/f/am$a;

    invoke-direct {v1, v0}, Lcom/tkay/core/common/f/am$a;-><init>(Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/am$a;->a()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_2

    :cond_3
    return-void
.end method

.method private f()Ljava/lang/String;
    .locals 4

    .line 166
    iget-object v0, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-boolean v0, v0, Lcom/tkay/core/common/f/ag;->n:Z

    if-eqz v0, :cond_1

    .line 167
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 169
    iget-object v1, p0, Lcom/tkay/core/b/i;->n:Lcom/tkay/core/common/f/l;

    if-eqz v1, :cond_0

    .line 170
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v2, "ad_source_id"

    .line 172
    iget-object v3, p0, Lcom/tkay/core/b/i;->n:Lcom/tkay/core/common/f/l;

    iget-object v3, v3, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "tp_bid_id"

    .line 173
    iget-object v3, p0, Lcom/tkay/core/b/i;->n:Lcom/tkay/core/common/f/l;

    iget-object v3, v3, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 175
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 177
    :goto_0
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 180
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_1
    const-string v0, "[]"

    :goto_1
    return-object v0
.end method


# virtual methods
.method protected final a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V
    .locals 0

    .line 154
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V

    .line 156
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result p2

    if-nez p2, :cond_0

    .line 158
    iget-object p2, p0, Lcom/tkay/core/b/i;->x:Ljava/util/List;

    const/4 p3, 0x0

    invoke-static {p2, p1, p3}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    :cond_0
    return-void
.end method

.method protected final a(Ljava/util/List;Lcom/tkay/core/common/h/k;)V
    .locals 17
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;",
            "Lcom/tkay/core/common/h/k;",
            ")V"
        }
    .end annotation

    move-object/from16 v0, p0

    .line 85
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 86
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 88
    invoke-direct {v0, v1, v2}, Lcom/tkay/core/b/i;->a(Lorg/json/JSONArray;Lorg/json/JSONArray;)V

    .line 89
    invoke-direct {v0, v1}, Lcom/tkay/core/b/i;->a(Lorg/json/JSONArray;)V

    .line 93
    new-instance v3, Lcom/tkay/core/b/a/b;

    invoke-direct {v3}, Lcom/tkay/core/b/a/b;-><init>()V

    .line 94
    iget-object v4, v0, Lcom/tkay/core/b/i;->w:Ljava/lang/String;

    iput-object v4, v3, Lcom/tkay/core/b/a/b;->a:Ljava/lang/String;

    .line 95
    invoke-virtual {v2}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v3, Lcom/tkay/core/b/a/b;->b:Ljava/lang/String;

    .line 96
    invoke-direct/range {p0 .. p0}, Lcom/tkay/core/b/i;->f()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v3, Lcom/tkay/core/b/a/b;->c:Ljava/lang/String;

    .line 97
    iget-object v2, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->as()I

    move-result v2

    iput v2, v3, Lcom/tkay/core/b/a/b;->f:I

    .line 101
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    const-string v4, ""

    if-lez v2, :cond_0

    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v4

    .line 103
    :goto_0
    iget-object v2, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->x:Lcom/tkay/core/common/f/am;

    if-eqz v2, :cond_1

    .line 104
    iget-object v2, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->x:Lcom/tkay/core/common/f/am;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/am;->a()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    .line 105
    iput-object v2, v3, Lcom/tkay/core/b/a/b;->d:Ljava/lang/String;

    goto :goto_1

    :cond_1
    move-object v2, v4

    .line 107
    :goto_1
    iput-object v1, v3, Lcom/tkay/core/b/a/b;->e:Ljava/lang/String;

    .line 109
    iget-object v5, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {v5}, Lcom/tkay/core/c/d;->f()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v3, Lcom/tkay/core/b/a/b;->g:Ljava/lang/String;

    .line 1126
    iget-object v5, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v5}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object v5

    iget-object v6, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    invoke-virtual {v5, v6}, Lcom/tkay/core/common/w;->b(Ljava/lang/String;)I

    move-result v5

    const/4 v6, 0x1

    .line 1131
    iget-object v7, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v7, v7, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    const/4 v8, 0x0

    if-eqz v7, :cond_2

    .line 1132
    iget-object v4, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v4, v4, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/ae;->c()Ljava/lang/Boolean;

    move-result-object v4

    .line 1133
    iget-object v6, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/ae;->a()Ljava/lang/String;

    move-result-object v6

    .line 1134
    iget-object v7, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v7, v7, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/ae;->b()Z

    move-result v7

    goto :goto_2

    :cond_2
    move v7, v6

    move-object v6, v4

    move-object v4, v8

    .line 1137
    :goto_2
    iget-object v9, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v9, v9, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    iget-object v10, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v10, v10, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget v10, v10, Lcom/tkay/core/common/j;->d:I

    iget-object v11, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget v11, v11, Lcom/tkay/core/common/f/ag;->v:I

    iget-boolean v12, v0, Lcom/tkay/core/b/i;->z:Z

    iget-boolean v13, v0, Lcom/tkay/core/b/i;->A:Z

    iget-object v14, v0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v14, v14, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    .line 1142
    invoke-static {v14}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result v14

    .line 2024
    new-instance v15, Lcom/tkay/core/common/f/g;

    move-object/from16 v16, v3

    invoke-virtual {v9}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v15, v3, v8}, Lcom/tkay/core/common/f/g;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "1004684"

    .line 2025
    iput-object v3, v15, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    .line 2026
    invoke-virtual {v9}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v15, Lcom/tkay/core/common/f/g;->b:Ljava/lang/String;

    .line 2027
    invoke-virtual {v9}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v15, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    .line 2028
    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v15, Lcom/tkay/core/common/f/g;->k:Ljava/lang/String;

    .line 2029
    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v15, Lcom/tkay/core/common/f/g;->m:Ljava/lang/String;

    .line 2030
    invoke-virtual {v9}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v15, Lcom/tkay/core/common/f/g;->n:Ljava/lang/String;

    const-string v3, "1"

    const-string v5, "2"

    if-eqz v7, :cond_3

    move-object v7, v3

    goto :goto_3

    :cond_3
    move-object v7, v5

    .line 2031
    :goto_3
    iput-object v7, v15, Lcom/tkay/core/common/f/g;->o:Ljava/lang/String;

    .line 2033
    invoke-static {v11}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    iput-object v7, v15, Lcom/tkay/core/common/f/g;->p:Ljava/lang/String;

    .line 2035
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_4

    .line 2036
    iput-object v1, v15, Lcom/tkay/core/common/f/g;->q:Ljava/lang/String;

    .line 2038
    :cond_4
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 2039
    iput-object v2, v15, Lcom/tkay/core/common/f/g;->r:Ljava/lang/String;

    :cond_5
    if-nez v4, :cond_6

    const-string v1, "0"

    goto :goto_4

    .line 2045
    :cond_6
    invoke-virtual {v4}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_7

    move-object v1, v3

    goto :goto_4

    :cond_7
    move-object v1, v5

    :goto_4
    iput-object v1, v15, Lcom/tkay/core/common/f/g;->s:Ljava/lang/String;

    .line 2048
    iput-object v6, v15, Lcom/tkay/core/common/f/g;->t:Ljava/lang/String;

    if-eqz v12, :cond_8

    move-object v1, v3

    goto :goto_5

    :cond_8
    move-object v1, v5

    .line 2050
    :goto_5
    iput-object v1, v15, Lcom/tkay/core/common/f/g;->u:Ljava/lang/String;

    if-eqz v13, :cond_9

    move-object v1, v3

    goto :goto_6

    :cond_9
    move-object v1, v5

    .line 2051
    :goto_6
    iput-object v1, v15, Lcom/tkay/core/common/f/g;->v:Ljava/lang/String;

    .line 2052
    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v15, Lcom/tkay/core/common/f/g;->w:Ljava/lang/String;

    if-eqz v14, :cond_a

    goto :goto_7

    :cond_a
    move-object v3, v5

    .line 2053
    :goto_7
    iput-object v3, v15, Lcom/tkay/core/common/f/g;->x:Ljava/lang/String;

    .line 2056
    invoke-static {v15}, Lcom/tkay/core/common/k/c;->b(Lcom/tkay/core/common/f/g;)V

    .line 119
    new-instance v1, Lcom/tkay/core/b/a/a;

    iget-object v5, v0, Lcom/tkay/core/b/i;->k:Ljava/lang/String;

    iget-object v6, v0, Lcom/tkay/core/b/i;->j:Ljava/lang/String;

    iget-object v7, v0, Lcom/tkay/core/b/i;->i:Ljava/lang/String;

    const/4 v9, 0x0

    move-object v4, v1

    move-object/from16 v8, p1

    invoke-direct/range {v4 .. v9}, Lcom/tkay/core/b/a/a;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;I)V

    move-object/from16 v2, v16

    .line 120
    invoke-virtual {v1, v2}, Lcom/tkay/core/b/a/a;->a(Lcom/tkay/core/b/a/b;)V

    const/4 v2, 0x0

    move-object/from16 v3, p2

    .line 121
    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/b/a/a;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method

.method protected final declared-synchronized a(Ljava/util/List;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 59
    :try_start_0
    invoke-super {p0, p1, p2}, Lcom/tkay/core/b/b;->a(Ljava/util/List;Ljava/util/Map;)V

    .line 62
    iget-object p1, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/w;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 64
    iput-boolean p1, p0, Lcom/tkay/core/b/i;->z:Z

    .line 65
    iput-boolean p1, p0, Lcom/tkay/core/b/i;->A:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 67
    :try_start_1
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :catchall_0
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map$Entry;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 69
    :try_start_2
    invoke-interface {p2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 71
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    const/16 v1, 0x42

    const/4 v2, 0x1

    if-ne v0, v1, :cond_1

    .line 72
    iput-boolean v2, p0, Lcom/tkay/core/b/i;->z:Z

    goto :goto_0

    .line 73
    :cond_1
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p2

    const/4 v0, 0x6

    if-ne p2, v0, :cond_0

    .line 74
    iput-boolean v2, p0, Lcom/tkay/core/b/i;->A:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    .line 80
    :cond_2
    monitor-exit p0

    return-void

    .line 81
    :catchall_1
    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected final e()Ljava/lang/String;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/tkay/core/b/i;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->m:Ljava/lang/String;

    return-object v0
.end method
