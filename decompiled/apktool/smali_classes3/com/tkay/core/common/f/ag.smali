.class public Lcom/tkay/core/common/f/ag;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field public b:Landroid/content/Context;

.field public c:Lcom/tkay/core/common/j;

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:I

.field public g:J

.field public h:J

.field public i:J

.field public j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field public k:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field public l:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field public m:Ljava/lang/String;

.field public n:Z

.field public o:Lcom/tkay/core/c/d;

.field public p:Ljava/lang/String;

.field public q:Ljava/lang/String;

.field public r:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field public s:Lorg/json/JSONObject;

.field public t:Lcom/tkay/core/common/f/d;

.field public u:Lcom/tkay/core/common/f/aj;

.field public v:I

.field public w:D

.field public x:Lcom/tkay/core/common/f/am;

.field public y:Lcom/tkay/core/common/f/ae;

.field public z:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    const-class v0, Lcom/tkay/core/common/f/ag;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/f/ag;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x2

    .line 58
    iput v0, p0, Lcom/tkay/core/common/f/ag;->v:I

    const/4 v0, 0x0

    .line 65
    iput v0, p0, Lcom/tkay/core/common/f/ag;->z:I

    return-void
.end method

.method private d(Ljava/util/List;)Lcom/tkay/core/common/f/ag;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Lcom/tkay/core/common/f/ag;"
        }
    .end annotation

    .line 68
    new-instance v0, Lcom/tkay/core/common/f/ag;

    invoke-direct {v0}, Lcom/tkay/core/common/f/ag;-><init>()V

    .line 69
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    .line 70
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    .line 71
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    .line 72
    iget v1, p0, Lcom/tkay/core/common/f/ag;->f:I

    iput v1, v0, Lcom/tkay/core/common/f/ag;->f:I

    .line 73
    iget-wide v1, p0, Lcom/tkay/core/common/f/ag;->h:J

    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->h:J

    .line 74
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    .line 75
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    .line 76
    iget-wide v1, p0, Lcom/tkay/core/common/f/ag;->g:J

    const-wide/16 v3, 0x0

    cmp-long v3, v1, v3

    if-gez v3, :cond_0

    const-wide/16 v1, 0x2710

    .line 77
    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->g:J

    goto :goto_0

    .line 79
    :cond_0
    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->g:J

    .line 82
    :goto_0
    iget-boolean v1, p0, Lcom/tkay/core/common/f/ag;->n:Z

    iput-boolean v1, v0, Lcom/tkay/core/common/f/ag;->n:Z

    .line 84
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    .line 85
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    .line 88
    iput-object p1, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    .line 89
    iget-object p1, p0, Lcom/tkay/core/common/f/ag;->r:Ljava/util/Map;

    iput-object p1, v0, Lcom/tkay/core/common/f/ag;->r:Ljava/util/Map;

    .line 91
    iget-wide v1, p0, Lcom/tkay/core/common/f/ag;->i:J

    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->i:J

    .line 93
    iget-object p1, p0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iput-object p1, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    .line 94
    iget-object p1, p0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    iput-object p1, v0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    .line 96
    iget p1, p0, Lcom/tkay/core/common/f/ag;->v:I

    iput p1, v0, Lcom/tkay/core/common/f/ag;->v:I

    .line 98
    iget-object p1, p0, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    iput-object p1, v0, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    .line 100
    iget-wide v1, p0, Lcom/tkay/core/common/f/ag;->w:D

    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->w:D

    .line 101
    iget p1, p0, Lcom/tkay/core/common/f/ag;->z:I

    iput p1, v0, Lcom/tkay/core/common/f/ag;->z:I

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/util/List;)Lcom/tkay/core/common/f/ag;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Lcom/tkay/core/common/f/ag;"
        }
    .end annotation

    .line 214
    invoke-direct {p0, p1}, Lcom/tkay/core/common/f/ag;->d(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/util/List;Ljava/util/List;)Lcom/tkay/core/common/f/ag;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Lcom/tkay/core/common/f/ag;"
        }
    .end annotation

    const-string v0, "size"

    .line 120
    invoke-direct {p0, p1}, Lcom/tkay/core/common/f/ag;->d(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object p1

    .line 122
    iget-object v1, p0, Lcom/tkay/core/common/f/ag;->m:Ljava/lang/String;

    iput-object v1, p1, Lcom/tkay/core/common/f/ag;->m:Ljava/lang/String;

    .line 124
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_e

    .line 125
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object p2

    .line 126
    iput-object p2, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    const/4 v1, 0x0

    .line 128
    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 129
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 130
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 131
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/f/aj;

    .line 132
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v6

    const/4 v7, 0x7

    if-ne v6, v7, :cond_0

    .line 133
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v3, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 134
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 138
    :cond_1
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 139
    iget v5, p1, Lcom/tkay/core/common/f/ag;->f:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-static {p2, v5, v6, v2}, Lcom/tkay/core/api/TYBidRequestInfo;->fillBaseCommonParams(Lorg/json/JSONObject;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;)V

    .line 142
    :try_start_0
    iget v5, p1, Lcom/tkay/core/common/f/ag;->f:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, -0x1

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v7

    const/16 v8, 0x32

    const/4 v9, 0x1

    if-eq v7, v8, :cond_3

    const/16 v1, 0x34

    if-eq v7, v1, :cond_2

    goto :goto_1

    :cond_2
    const-string v1, "4"

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    move v1, v9

    goto :goto_2

    :cond_3
    const-string v7, "2"

    invoke-virtual {v5, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v5, :cond_4

    goto :goto_2

    :cond_4
    :goto_1
    move v1, v6

    :goto_2
    const/4 v5, 0x2

    const-string v6, "get_offer"

    if-eqz v1, :cond_6

    if-eq v1, v9, :cond_5

    goto :goto_3

    .line 151
    :cond_5
    :try_start_1
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_3

    .line 144
    :cond_6
    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    iget-object v7, p1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v8, p1, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v1, v7, v8, v2}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v1

    .line 145
    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    .line 146
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 147
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 154
    :cond_7
    :goto_3
    iget v0, p1, Lcom/tkay/core/common/f/ag;->z:I

    iget-object v1, p1, Lcom/tkay/core/common/f/ag;->l:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ne v0, v1, :cond_8

    .line 155
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 158
    :cond_8
    iget-object v0, p1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v0

    invoke-virtual {v0, v4}, Lcom/tkay/core/common/d/c;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 159
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_d

    .line 160
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 161
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 162
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_9
    :goto_4
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_b

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/w;

    .line 163
    invoke-virtual {v4}, Lcom/tkay/core/common/f/w;->d()I

    move-result v5

    if-lez v5, :cond_a

    .line 164
    invoke-virtual {v4}, Lcom/tkay/core/common/f/w;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/tkay/core/common/f/w;->d()I

    move-result v6

    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 166
    :cond_a
    invoke-virtual {v4}, Lcom/tkay/core/common/f/w;->c()I

    move-result v5

    if-lez v5, :cond_9

    .line 167
    invoke-virtual {v4}, Lcom/tkay/core/common/f/w;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Lcom/tkay/core/common/f/w;->c()I

    move-result v4

    invoke-virtual {v2, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_4

    .line 170
    :cond_b
    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-lez v0, :cond_c

    const-string v0, "o_cl"

    .line 171
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 173
    :cond_c
    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-lez v0, :cond_d

    const-string v0, "o_im"

    .line 174
    invoke-virtual {p2, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_d
    const-string v0, "unit_ids"

    .line 198
    new-instance v1, Lorg/json/JSONArray;

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception v0

    .line 200
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 202
    :goto_5
    iput-object p2, p1, Lcom/tkay/core/common/f/ag;->s:Lorg/json/JSONObject;

    .line 207
    :cond_e
    iget-object p2, p0, Lcom/tkay/core/common/f/ag;->x:Lcom/tkay/core/common/f/am;

    iput-object p2, p1, Lcom/tkay/core/common/f/ag;->x:Lcom/tkay/core/common/f/am;

    .line 208
    iget-object p2, p0, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    iput-object p2, p1, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    return-object p1
.end method

.method public final b(Ljava/util/List;)Lcom/tkay/core/common/f/ag;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Lcom/tkay/core/common/f/ag;"
        }
    .end annotation

    .line 220
    invoke-direct {p0, p1}, Lcom/tkay/core/common/f/ag;->d(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object p1

    .line 222
    iget-object v0, p0, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    iput-object v0, p1, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    .line 223
    iget-wide v0, p0, Lcom/tkay/core/common/f/ag;->h:J

    iput-wide v0, p1, Lcom/tkay/core/common/f/ag;->h:J

    return-object p1
.end method

.method public final c(Ljava/util/List;)Lcom/tkay/core/common/f/ag;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Lcom/tkay/core/common/f/ag;"
        }
    .end annotation

    .line 229
    invoke-direct {p0, p1}, Lcom/tkay/core/common/f/ag;->d(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object p1

    .line 231
    iget-object v0, p0, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    iput-object v0, p1, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    return-object p1
.end method
