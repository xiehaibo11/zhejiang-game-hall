.class final Lcom/tkay/core/b/d/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/d/a;->a(Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;ILjava/util/List;JII)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/c/d;

.field final synthetic d:I

.field final synthetic e:J

.field final synthetic f:I

.field final synthetic g:I

.field final synthetic h:Ljava/util/List;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;IJIILjava/util/List;)V
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/tkay/core/b/d/a$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/tkay/core/b/d/a$1;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/b/d/a$1;->c:Lcom/tkay/core/c/d;

    iput p4, p0, Lcom/tkay/core/b/d/a$1;->d:I

    iput-wide p5, p0, Lcom/tkay/core/b/d/a$1;->e:J

    iput p7, p0, Lcom/tkay/core/b/d/a$1;->f:I

    iput p8, p0, Lcom/tkay/core/b/d/a$1;->g:I

    iput-object p9, p0, Lcom/tkay/core/b/d/a$1;->h:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    .line 26
    sget-object v0, Lcom/tkay/core/b/d/a;->a:Ljava/lang/String;

    .line 27
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 29
    new-instance v1, Lcom/tkay/core/common/f/d;

    invoke-direct {v1}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 30
    iget-object v2, p0, Lcom/tkay/core/b/d/a$1;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->x(Ljava/lang/String;)V

    .line 31
    iget-object v2, p0, Lcom/tkay/core/b/d/a$1;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->y(Ljava/lang/String;)V

    .line 32
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/core/b/d/a$1;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v3}, Lcom/tkay/core/c/d;->Y()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 33
    iget-object v2, p0, Lcom/tkay/core/b/d/a$1;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->w(Ljava/lang/String;)V

    .line 34
    iget v2, p0, Lcom/tkay/core/b/d/a$1;->d:I

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->t(I)V

    .line 35
    iget-wide v2, p0, Lcom/tkay/core/b/d/a$1;->e:J

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/d;->e(J)V

    .line 36
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/d;->f(J)V

    .line 37
    iget-object v2, p0, Lcom/tkay/core/b/d/a$1;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->P()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->E(I)V

    .line 38
    iget-object v2, p0, Lcom/tkay/core/b/d/a$1;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v2}, Lcom/tkay/core/c/d;->af()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->v(I)V

    .line 39
    iget v2, p0, Lcom/tkay/core/b/d/a$1;->f:I

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->D(I)V

    .line 40
    iget v2, p0, Lcom/tkay/core/b/d/a$1;->g:I

    .line 1594
    iput v2, v1, Lcom/tkay/core/common/f/d;->q:I

    const/4 v2, 0x0

    .line 43
    :goto_0
    iget-object v3, p0, Lcom/tkay/core/b/d/a$1;->h:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_4

    .line 45
    iget-object v3, p0, Lcom/tkay/core/b/d/a$1;->h:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    .line 47
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v4

    const/4 v5, 0x7

    if-eq v4, v5, :cond_3

    .line 51
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 66
    :try_start_0
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->o()I

    move-result v4

    .line 68
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "sorttype"

    .line 70
    invoke-virtual {v5, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "unit_id"

    .line 71
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "bidresult"

    .line 72
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->O()I

    move-result v6

    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "bidprice"

    .line 73
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->L()Z

    move-result v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v7, "0"

    if-eqz v6, :cond_0

    :try_start_1
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide v8

    invoke-static {v8, v9}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v6

    goto :goto_1

    :cond_0
    move-object v6, v7

    :goto_1
    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "s_pty"

    .line 74
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->L()Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->af()D

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v7

    :cond_1
    invoke-virtual {v5, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "nw_firm_id"

    .line 75
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "tp_bid_id"

    .line 76
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v6

    if-eqz v6, :cond_2

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v6

    iget-object v6, v6, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    goto :goto_2

    :cond_2
    const/4 v6, 0x0

    :goto_2
    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "rl_bid_status"

    .line 77
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->N()I

    move-result v6

    invoke-virtual {v5, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "errormsg"

    .line 78
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 79
    invoke-virtual {v0, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    .line 85
    :cond_4
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f/d;->s(Ljava/lang/String;)V

    .line 88
    iget-object v0, p0, Lcom/tkay/core/b/d/a$1;->c:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->ax()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 90
    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f/d;->a(Lorg/json/JSONObject;)V

    .line 93
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/16 v2, 0xb

    invoke-virtual {v0, v2, v1}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    return-void
.end method
