.class public final Lcom/tkay/core/common/l/s;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/d;
    .locals 1

    .line 99
    invoke-virtual {p0, p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->setUnitGroupInfo(Lcom/tkay/core/common/f/aj;)V

    .line 100
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->F()I

    move-result p2

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p0, v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->setRefresh(Z)V

    .line 103
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object p2

    .line 3455
    iput-object p2, p1, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 108
    :catchall_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->T()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 109
    invoke-virtual {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/d;->v(Ljava/lang/String;)V

    .line 111
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/d;->e(Ljava/lang/String;)V

    .line 113
    invoke-virtual {p0, p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    return-object p1
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            "Ljava/lang/String;",
            "III",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/common/f/d;"
        }
    .end annotation

    .line 49
    new-instance v0, Lcom/tkay/core/common/f/d;

    invoke-direct {v0}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 50
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->x(Ljava/lang/String;)V

    .line 51
    invoke-virtual {v0, p0}, Lcom/tkay/core/common/f/d;->y(Ljava/lang/String;)V

    .line 53
    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/d;->p(Ljava/lang/String;)V

    .line 55
    invoke-virtual {v0, p4}, Lcom/tkay/core/common/f/d;->m(Ljava/lang/String;)V

    .line 56
    invoke-virtual {v0, p5}, Lcom/tkay/core/common/f/d;->s(I)V

    .line 57
    invoke-virtual {v0, p6}, Lcom/tkay/core/common/f/d;->t(I)V

    const/4 p0, 0x0

    .line 1603
    iput p0, v0, Lcom/tkay/core/common/f/d;->r:I

    const/4 p1, 0x2

    .line 2594
    iput p1, v0, Lcom/tkay/core/common/f/d;->q:I

    .line 2612
    iput p0, v0, Lcom/tkay/core/common/f/d;->s:I

    .line 63
    invoke-static {v0, p3}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;)V

    .line 65
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->R()V

    .line 66
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->i()I

    move-result p0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/f/d;->C(I)V

    .line 68
    invoke-virtual {v0, p7}, Lcom/tkay/core/common/f/d;->D(I)V

    .line 70
    invoke-static {p8, v0}, Lcom/tkay/core/common/l/s;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/core/common/f/d;)V
    .locals 8

    .line 298
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 299
    invoke-static {p0}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object p0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p0, v2}, Lcom/tkay/core/a/a;->a(I)Ljava/util/Map;

    move-result-object p0

    const/4 v2, 0x0

    if-eqz p0, :cond_1

    .line 305
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v3

    move v4, v2

    move v5, v4

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_0

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/tkay/core/common/f/ad;

    .line 306
    iget v7, v6, Lcom/tkay/core/common/f/ad;->c:I

    add-int/2addr v4, v7

    .line 307
    iget v6, v6, Lcom/tkay/core/common/f/ad;->d:I

    add-int/2addr v5, v6

    goto :goto_0

    .line 310
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/f/ad;

    goto :goto_1

    :cond_1
    const/4 p0, 0x0

    move v4, v2

    move v5, v4

    :goto_1
    add-int/lit8 v4, v4, 0x1

    .line 313
    invoke-virtual {p1, v4}, Lcom/tkay/core/common/f/d;->g(I)V

    add-int/lit8 v5, v5, 0x1

    .line 314
    invoke-virtual {p1, v5}, Lcom/tkay/core/common/f/d;->h(I)V

    if-eqz p0, :cond_2

    .line 315
    iget v3, p0, Lcom/tkay/core/common/f/ad;->c:I

    goto :goto_2

    :cond_2
    move v3, v2

    :goto_2
    add-int/lit8 v3, v3, 0x1

    invoke-virtual {p1, v3}, Lcom/tkay/core/common/f/d;->i(I)V

    if-eqz p0, :cond_3

    .line 316
    iget v2, p0, Lcom/tkay/core/common/f/ad;->d:I

    :cond_3
    add-int/lit8 v2, v2, 0x1

    invoke-virtual {p1, v2}, Lcom/tkay/core/common/f/d;->j(I)V

    .line 317
    new-instance p0, Ljava/lang/StringBuilder;

    const-string p1, "Check cap waite time:"

    invoke-direct {p0, p1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v0

    invoke-virtual {p0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;)V
    .locals 3

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 256
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->Y()I

    move-result v0

    const-string v1, "1"

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    if-ne v0, v2, :cond_0

    .line 257
    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->o(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "0"

    .line 259
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->o(Ljava/lang/String;)V

    .line 262
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->P()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->E(I)V

    .line 263
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->w(Ljava/lang/String;)V

    .line 264
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->af()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->v(I)V

    .line 265
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->Y()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 267
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->L()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->j(Ljava/lang/String;)V

    .line 268
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->k(Ljava/lang/String;)V

    .line 269
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->y()D

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/tkay/core/common/f/d;->c(D)V

    .line 270
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->z()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->d(Ljava/lang/String;)V

    .line 272
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->J()Ljava/util/Map;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->b(Ljava/util/Map;)V

    .line 273
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->M()Lcom/tkay/core/api/TYRewardInfo;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->a(Lcom/tkay/core/api/TYRewardInfo;)V

    .line 274
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->N()Ljava/util/Map;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->c(Ljava/util/Map;)V

    .line 276
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->l()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->a(I)V

    .line 277
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->m()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->b(I)V

    .line 280
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->d()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/d;->t(Ljava/lang/String;)V

    .line 283
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ax()Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 285
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/d;->a(Lorg/json/JSONObject;)V

    :cond_1
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V
    .locals 5

    const-string v0, "0"

    if-eqz p3, :cond_0

    .line 126
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object p3

    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p3, v1, v2}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;

    move-result-object p3

    goto :goto_0

    :cond_0
    const/4 p3, 0x0

    .line 129
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->c(I)V

    .line 130
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->u(I)V

    .line 131
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->l(Ljava/lang/String;)V

    .line 132
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->C()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->l(I)V

    .line 133
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->D()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->m(I)V

    .line 134
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->T()I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->f(I)V

    .line 135
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->o(I)V

    .line 136
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->n(Ljava/lang/String;)V

    const/4 p2, 0x0

    if-eqz p3, :cond_1

    .line 137
    iget v1, p3, Lcom/tkay/core/common/f/ad$a;->e:I

    goto :goto_1

    :cond_1
    move v1, p2

    :goto_1
    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/d;->q(I)V

    if-eqz p3, :cond_2

    .line 138
    iget p2, p3, Lcom/tkay/core/common/f/ad$a;->d:I

    :cond_2
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->r(I)V

    .line 141
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->L()Z

    move-result p2

    if-eqz p2, :cond_4

    .line 142
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result p2

    if-eqz p2, :cond_3

    .line 143
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 145
    iget-wide v1, p2, Lcom/tkay/core/common/f/l;->o:D

    invoke-virtual {p0, v1, v2}, Lcom/tkay/core/common/f/d;->d(D)V

    .line 146
    iget-wide p2, p2, Lcom/tkay/core/common/f/l;->o:D

    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->a(D)V

    goto :goto_2

    .line 149
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide p2

    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->d(D)V

    .line 150
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->af()D

    move-result-wide p2

    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->a(D)V

    goto :goto_2

    :cond_4
    const-wide/16 p2, 0x0

    .line 153
    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->d(D)V

    .line 154
    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->a(D)V

    .line 158
    :cond_5
    :goto_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result p2

    if-eqz p2, :cond_7

    .line 159
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->U()I

    move-result p2

    const/4 p3, 0x2

    if-eq p2, p3, :cond_9

    .line 162
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result p2

    if-eqz p2, :cond_6

    .line 163
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p2

    if-eqz p2, :cond_9

    .line 165
    iget-wide v1, p2, Lcom/tkay/core/common/f/l;->o:D

    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->g()D

    move-result-wide v3

    mul-double/2addr v1, v3

    invoke-virtual {p0, v1, v2}, Lcom/tkay/core/common/f/d;->b(D)V

    .line 166
    iget-object p2, p2, Lcom/tkay/core/common/f/l;->p:Ljava/lang/String;

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->i(Ljava/lang/String;)V

    goto :goto_3

    .line 169
    :cond_6
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide p2

    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->g()D

    move-result-wide v1

    mul-double/2addr p2, v1

    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->b(D)V

    const-string p2, "exact"

    .line 170
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->i(Ljava/lang/String;)V

    goto :goto_3

    .line 174
    :cond_7
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->I()D

    move-result-wide p2

    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/d;->b(D)V

    .line 175
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->F()Ljava/lang/String;

    move-result-object p2

    .line 176
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_8

    const-string p2, "publisher_defined"

    .line 179
    :cond_8
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->i(Ljava/lang/String;)V

    .line 183
    :cond_9
    :goto_3
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->i()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->n(I)V

    .line 184
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->y()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->f(Ljava/lang/String;)V

    .line 185
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->u()Ljava/lang/String;

    move-result-object p2

    .line 4145
    iput-object p2, p0, Lcom/tkay/core/common/f/ai;->ao:Ljava/lang/String;

    .line 186
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->v()I

    move-result p2

    .line 4153
    iput p2, p0, Lcom/tkay/core/common/f/ai;->ap:I

    .line 187
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->w()I

    move-result p2

    .line 4161
    iput p2, p0, Lcom/tkay/core/common/f/ai;->aq:I

    .line 188
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->E()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->k(I)V

    .line 191
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->U()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->e(I)V

    .line 194
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object p3

    invoke-direct {p2, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 195
    new-instance p3, Lorg/json/JSONObject;

    invoke-direct {p3}, Lorg/json/JSONObject;-><init>()V

    const/16 v1, 0x23

    .line 197
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v2

    if-ne v1, v2, :cond_a

    const-string v1, "my_oid"

    .line 199
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 201
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v2

    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v2

    if-eqz v2, :cond_a

    .line 203
    invoke-virtual {v2, v1}, Lcom/tkay/core/c/d;->e(Ljava/lang/String;)Lcom/tkay/core/common/f/r;

    move-result-object v2

    if-eqz v2, :cond_a

    const-string v3, "o_id"

    .line 207
    invoke-virtual {p3, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "c_id"

    .line 208
    invoke-virtual {v2}, Lcom/tkay/core/common/f/r;->q()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 213
    :cond_a
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_e

    const/4 v1, 0x3

    .line 215
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v2

    if-eq v1, v2, :cond_b

    const/4 v1, 0x7

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v2

    if-ne v1, v2, :cond_e

    :cond_b
    const-string v1, "layout_type"

    .line 216
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 217
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_c

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_d

    :cond_c
    const-string p2, "2"

    :cond_d
    const-string v0, "tpl_type"

    .line 220
    invoke-virtual {p3, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_e
    const/16 p2, 0x1c

    .line 224
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    if-ne p2, v0, :cond_f

    .line 225
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p2

    if-eqz p2, :cond_f

    const-string v0, "origin_price"

    .line 227
    iget-wide v1, p2, Lcom/tkay/core/common/f/l;->originPrice:D

    invoke-virtual {p3, v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 232
    :cond_f
    invoke-virtual {p3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->q(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 238
    :catchall_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p2

    if-eqz p2, :cond_10

    .line 239
    iget-object p2, p2, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    goto :goto_4

    :cond_10
    const-string p2, ""

    :goto_4
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->c(Ljava/lang/String;)V

    .line 241
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->X()I

    move-result p2

    invoke-virtual {p0, p2}, Lcom/tkay/core/common/f/d;->w(I)V

    .line 243
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->d()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/d;->v(Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/common/f/d;",
            ")V"
        }
    .end annotation

    if-eqz p0, :cond_1

    const-string v0, "cp_placement_id"

    .line 76
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 78
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/d;->u(Ljava/lang/String;)V

    :cond_0
    const-string v0, "cp_pre_md"

    .line 81
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 82
    instance-of v0, p0, Ljava/lang/Integer;

    if-eqz v0, :cond_1

    .line 83
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/tkay/core/common/f/d;->B(I)V

    :cond_1
    return-void
.end method
