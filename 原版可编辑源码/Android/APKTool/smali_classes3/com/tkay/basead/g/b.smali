.class public final Lcom/tkay/basead/g/b;
.super Lcom/tkay/core/common/h/a;


# instance fields
.field a:Ljava/lang/String;

.field b:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(ILcom/tkay/core/common/f/r;Ljava/lang/String;)V
    .locals 3

    .line 35
    invoke-direct {p0}, Lcom/tkay/core/common/h/a;-><init>()V

    :try_start_0
    const-string v0, ""

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 64
    :pswitch_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->Y()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 61
    :pswitch_1
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->X()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 58
    :pswitch_2
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->W()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 55
    :pswitch_3
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->V()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 52
    :pswitch_4
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->U()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 49
    :pswitch_5
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->T()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 46
    :pswitch_6
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->S()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 43
    :pswitch_7
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->R()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 40
    :pswitch_8
    invoke-virtual {p2}, Lcom/tkay/core/common/f/r;->Q()Ljava/lang/String;

    move-result-object v0

    .line 68
    :goto_0
    invoke-virtual {p2, v0}, Lcom/tkay/core/common/f/r;->R(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 70
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    .line 71
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "://"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/basead/g/b;->a:Ljava/lang/String;

    .line 72
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    iput-object p2, p0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    .line 73
    invoke-virtual {p1}, Landroid/net/Uri;->getQueryParameterNames()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 74
    iget-object v1, p0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    invoke-virtual {p1, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 76
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    const-string p2, "req_id"

    invoke-virtual {p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 78
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
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

    const/4 p1, 0x0

    return-object p1
.end method

.method protected final a(Lcom/tkay/core/api/AdError;)V
    .locals 19

    move-object/from16 v0, p0

    .line 173
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 174
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/g/b;->c()Ljava/util/Map;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 177
    :try_start_0
    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 178
    invoke-interface {v2, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 185
    :catch_0
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v9

    .line 186
    iget-object v1, v0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_1

    :cond_1
    const-string v1, ""

    :goto_1
    move-object v10, v1

    .line 187
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/basead/g/b;->b()Ljava/lang/String;

    move-result-object v8

    const/16 v1, 0x3e8

    .line 189
    invoke-static {v1}, Lcom/tkay/core/common/f/n;->a(I)Ljava/lang/String;

    move-result-object v11

    .line 191
    invoke-static {}, Lcom/tkay/core/common/u;->a()Lcom/tkay/core/common/u;

    move-result-object v6

    const/4 v7, 0x1

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/core/common/u;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v13

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object v14

    iget-object v15, v0, Lcom/tkay/basead/g/b;->a:Ljava/lang/String;

    const-string v12, "tk"

    const-string v16, ""

    const-string v17, "1"

    const-string v18, ""

    invoke-static/range {v12 .. v18}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final a(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method protected final b()Ljava/lang/String;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/tkay/basead/g/b;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 85
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 88
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    const-string v1, "scenario"

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 90
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

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

    .line 106
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Content-Encoding"

    const-string v2, "gzip"

    .line 107
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json;charset=utf-8"

    .line 108
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method protected final d()[B
    .locals 4

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    :try_start_0
    const-string v1, "t"

    .line 116
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 120
    :catch_0
    iget-object v0, p0, Lcom/tkay/basead/g/b;->b:Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/basead/g/b;->c(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    new-array v0, v0, [B

    return-object v0
.end method

.method protected final g()Ljava/lang/String;
    .locals 1

    const-string v0, ""

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
