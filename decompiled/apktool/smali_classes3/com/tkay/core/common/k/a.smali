.class public Lcom/tkay/core/common/k/a;
.super Lcom/tkay/core/common/o;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/o<",
        "Lcom/tkay/core/common/f/e;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile f:Lcom/tkay/core/common/k/a;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 53
    invoke-direct {p0, p1}, Lcom/tkay/core/common/o;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/k/a;ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)Lcom/tkay/core/common/f/e;
    .locals 6

    const/4 v0, 0x0

    const/16 v1, 0xd

    if-ne p1, v1, :cond_1

    if-eqz p3, :cond_0

    .line 3163
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_1

    .line 3165
    invoke-virtual {v1, p3}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/aj;)V

    :cond_1
    const/4 v1, 0x4

    if-ne p1, v1, :cond_4

    if-eqz p3, :cond_2

    .line 3172
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v2

    goto :goto_1

    :cond_2
    move-object v2, v0

    :goto_1
    if-eqz v2, :cond_3

    .line 3174
    invoke-virtual {v2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v3

    const/4 v5, 0x1

    invoke-virtual {v2, v5, v3, v4, v5}, Lcom/tkay/core/common/f/l;->a(ZDZ)V

    .line 3176
    :cond_3
    instance-of v2, p2, Lcom/tkay/core/common/f/d;

    if-eqz v2, :cond_4

    .line 3177
    move-object v2, p2

    check-cast v2, Lcom/tkay/core/common/f/d;

    invoke-direct {p0, v2, p3}, Lcom/tkay/core/common/k/a;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    .line 3109
    :cond_4
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object p0

    .line 3110
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p0, p3}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p0

    .line 3112
    new-instance p3, Lcom/tkay/core/common/f/e;

    invoke-direct {p3}, Lcom/tkay/core/common/f/e;-><init>()V

    .line 3113
    iput p1, p3, Lcom/tkay/core/common/f/e;->a:I

    .line 3114
    iput-object p2, p3, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    const-wide/16 v2, 0x0

    cmp-long v2, p4, v2

    if-lez v2, :cond_5

    goto :goto_2

    .line 3115
    :cond_5
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p4

    :goto_2
    iput-wide p4, p3, Lcom/tkay/core/common/f/e;->c:J

    .line 3117
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p4

    invoke-virtual {p4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p4

    invoke-static {p4}, Lcom/tkay/core/common/r;->a(Landroid/content/Context;)Lcom/tkay/core/common/r;

    move-result-object p4

    invoke-virtual {p4, p1, p3, p0}, Lcom/tkay/core/common/r;->a(ILcom/tkay/core/common/f/e;Lcom/tkay/core/c/a;)V

    .line 3120
    invoke-static {p1, p2, p0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/c/a;)Z

    move-result p0

    if-eqz p0, :cond_6

    return-object v0

    :cond_6
    if-ne v1, p1, :cond_7

    .line 3217
    instance-of p0, p2, Lcom/tkay/core/common/f/d;

    if-eqz p0, :cond_7

    .line 3218
    invoke-static {}, Lcom/tkay/core/common/q;->a()Lcom/tkay/core/common/q;

    check-cast p2, Lcom/tkay/core/common/f/d;

    invoke-static {p2}, Lcom/tkay/core/common/q;->a(Lcom/tkay/core/common/f/d;)V

    :cond_7
    return-object p3
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;
    .locals 2

    .line 57
    sget-object v0, Lcom/tkay/core/common/k/a;->f:Lcom/tkay/core/common/k/a;

    if-nez v0, :cond_1

    .line 58
    const-class v0, Lcom/tkay/core/common/k/a;

    monitor-enter v0

    .line 59
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/k/a;->f:Lcom/tkay/core/common/k/a;

    if-nez v1, :cond_0

    .line 60
    new-instance v1, Lcom/tkay/core/common/k/a;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/k/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/k/a;->f:Lcom/tkay/core/common/k/a;

    .line 61
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 63
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/k/a;->f:Lcom/tkay/core/common/k/a;

    return-object p0
.end method

.method private static a(ILcom/tkay/core/common/f/aj;)V
    .locals 1

    const/16 v0, 0xd

    if-ne p0, v0, :cond_1

    if-eqz p1, :cond_0

    .line 163
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    if-eqz p0, :cond_1

    .line 165
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/aj;)V

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V
    .locals 7

    .line 294
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object p1

    .line 295
    iget-object v0, p0, Lcom/tkay/core/common/k/a;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 301
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->x()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 302
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_1

    goto :goto_1

    .line 306
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->H()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 307
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_2

    goto :goto_1

    .line 311
    :cond_2
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 314
    :try_start_0
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 316
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v3

    invoke-virtual {v3, p1, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 318
    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v2

    if-eqz v2, :cond_3

    const/4 v3, 0x0

    .line 320
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v6

    invoke-virtual {v2, v3, v4, v5, v6}, Lcom/tkay/core/common/f/l;->a(ZDZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 325
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :cond_4
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/k/a;Lcom/tkay/core/common/f/p;Z)V
    .locals 0

    .line 47
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/o;->a(Lcom/tkay/core/common/f/p;Z)V

    return-void
.end method

.method private static a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/c/a;)Z
    .locals 7

    .line 184
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->ak()Ljava/lang/String;

    move-result-object v0

    .line 185
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v1, :cond_1

    .line 186
    instance-of v1, p1, Lcom/tkay/core/common/f/d;

    if-eqz v1, :cond_1

    .line 188
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 189
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v0

    .line 190
    move-object v4, p1

    check-cast v4, Lcom/tkay/core/common/f/d;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/d;->H()I

    move-result v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    move v5, v2

    :goto_0
    if-ge v5, v0, :cond_1

    .line 192
    invoke-virtual {v1, v5}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v6, :cond_0

    return v3

    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 204
    :catchall_0
    :cond_1
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->ai()Ljava/util/Map;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 205
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 206
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p2, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 208
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_2

    return v3

    :cond_2
    return v2
.end method

.method private b(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)Lcom/tkay/core/common/f/e;
    .locals 6

    const/4 v0, 0x0

    const/16 v1, 0xd

    if-ne p1, v1, :cond_1

    if-eqz p3, :cond_0

    .line 2163
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_1

    .line 2165
    invoke-virtual {v1, p3}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/aj;)V

    :cond_1
    const/4 v1, 0x4

    if-ne p1, v1, :cond_4

    if-eqz p3, :cond_2

    .line 2172
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v2

    goto :goto_1

    :cond_2
    move-object v2, v0

    :goto_1
    if-eqz v2, :cond_3

    .line 2174
    invoke-virtual {v2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v3

    const/4 v5, 0x1

    invoke-virtual {v2, v5, v3, v4, v5}, Lcom/tkay/core/common/f/l;->a(ZDZ)V

    .line 2176
    :cond_3
    instance-of v2, p2, Lcom/tkay/core/common/f/d;

    if-eqz v2, :cond_4

    .line 2177
    move-object v2, p2

    check-cast v2, Lcom/tkay/core/common/f/d;

    invoke-direct {p0, v2, p3}, Lcom/tkay/core/common/k/a;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    .line 109
    :cond_4
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object p3

    .line 110
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p3, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p3

    .line 112
    new-instance v2, Lcom/tkay/core/common/f/e;

    invoke-direct {v2}, Lcom/tkay/core/common/f/e;-><init>()V

    .line 113
    iput p1, v2, Lcom/tkay/core/common/f/e;->a:I

    .line 114
    iput-object p2, v2, Lcom/tkay/core/common/f/e;->b:Lcom/tkay/core/common/f/ai;

    const-wide/16 v3, 0x0

    cmp-long v3, p4, v3

    if-lez v3, :cond_5

    goto :goto_2

    .line 115
    :cond_5
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p4

    :goto_2
    iput-wide p4, v2, Lcom/tkay/core/common/f/e;->c:J

    .line 117
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p4

    invoke-virtual {p4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p4

    invoke-static {p4}, Lcom/tkay/core/common/r;->a(Landroid/content/Context;)Lcom/tkay/core/common/r;

    move-result-object p4

    invoke-virtual {p4, p1, v2, p3}, Lcom/tkay/core/common/r;->a(ILcom/tkay/core/common/f/e;Lcom/tkay/core/c/a;)V

    .line 120
    invoke-static {p1, p2, p3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/c/a;)Z

    move-result p3

    if-eqz p3, :cond_6

    return-object v0

    :cond_6
    if-ne v1, p1, :cond_7

    .line 2217
    instance-of p1, p2, Lcom/tkay/core/common/f/d;

    if-eqz p1, :cond_7

    .line 2218
    invoke-static {}, Lcom/tkay/core/common/q;->a()Lcom/tkay/core/common/q;

    check-cast p2, Lcom/tkay/core/common/f/d;

    invoke-static {p2}, Lcom/tkay/core/common/q;->a(Lcom/tkay/core/common/f/d;)V

    :cond_7
    return-object v2
.end method

.method private b(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V
    .locals 3

    const/4 v0, 0x4

    if-ne p1, v0, :cond_2

    if-eqz p3, :cond_0

    .line 172
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    if-eqz p1, :cond_1

    .line 174
    invoke-virtual {p1}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v0

    const/4 v2, 0x1

    invoke-virtual {p1, v2, v0, v1, v2}, Lcom/tkay/core/common/f/l;->a(ZDZ)V

    .line 176
    :cond_1
    instance-of p1, p2, Lcom/tkay/core/common/f/d;

    if-eqz p1, :cond_2

    .line 177
    check-cast p2, Lcom/tkay/core/common/f/d;

    invoke-direct {p0, p2, p3}, Lcom/tkay/core/common/k/a;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    :cond_2
    return-void
.end method

.method static synthetic b(ILcom/tkay/core/common/f/ai;)Z
    .locals 5

    .line 4132
    instance-of v0, p1, Lcom/tkay/core/common/f/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    .line 4135
    move-object v0, p1

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    const/16 v3, 0x43

    const/4 v4, 0x1

    if-ne v2, v3, :cond_0

    return v4

    .line 4138
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    .line 4143
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v2

    .line 4144
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v2

    .line 4146
    invoke-virtual {v2, p0}, Lcom/tkay/core/c/a;->a(I)Ljava/util/Map;

    move-result-object p0

    if-eqz p0, :cond_4

    const-string v2, "0"

    .line 4149
    invoke-interface {p0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 4150
    invoke-interface {p0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 4151
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_2

    return v4

    :cond_2
    return v1

    .line 4152
    :cond_3
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {p0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 4153
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 4154
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_4

    return v4

    :cond_4
    :goto_0
    return v1
.end method

.method private static c(ILcom/tkay/core/common/f/ai;)Z
    .locals 5

    .line 132
    instance-of v0, p1, Lcom/tkay/core/common/f/d;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 135
    :cond_0
    move-object v0, p1

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    const/16 v3, 0x43

    const/4 v4, 0x1

    if-ne v2, v3, :cond_1

    return v4

    .line 138
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    if-eqz v2, :cond_5

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_0

    .line 143
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v2

    .line 144
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v2

    .line 146
    invoke-virtual {v2, p0}, Lcom/tkay/core/c/a;->a(I)Ljava/util/Map;

    move-result-object p0

    if-eqz p0, :cond_5

    const-string v2, "0"

    .line 149
    invoke-interface {p0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 150
    invoke-interface {p0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 151
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_3

    return v4

    :cond_3
    return v1

    .line 152
    :cond_4
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {p0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 153
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 154
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {p1}, Lcom/tkay/core/common/f/ai;->Y()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_5

    return v4

    :cond_5
    :goto_0
    return v1
.end method

.method private static d(ILcom/tkay/core/common/f/ai;)V
    .locals 1

    const/4 v0, 0x4

    if-ne v0, p0, :cond_0

    .line 217
    instance-of p0, p1, Lcom/tkay/core/common/f/d;

    if-eqz p0, :cond_0

    .line 218
    invoke-static {}, Lcom/tkay/core/common/q;->a()Lcom/tkay/core/common/q;

    check-cast p1, Lcom/tkay/core/common/f/d;

    invoke-static {p1}, Lcom/tkay/core/common/q;->a(Lcom/tkay/core/common/f/d;)V

    :cond_0
    return-void
.end method

.method private static e(ILcom/tkay/core/common/f/ai;)V
    .locals 1

    .line 224
    instance-of v0, p1, Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_3

    const/4 v0, 0x4

    if-eq p0, v0, :cond_2

    const/4 v0, 0x6

    if-eq p0, v0, :cond_1

    const/16 p1, 0x15

    if-eq p0, p1, :cond_0

    goto :goto_0

    .line 248
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->L()V

    goto :goto_0

    .line 245
    :cond_1
    check-cast p1, Lcom/tkay/core/common/f/d;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->d()V

    return-void

    .line 227
    :cond_2
    check-cast p1, Lcom/tkay/core/common/f/d;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->c()V

    :cond_3
    :goto_0
    return-void
.end method


# virtual methods
.method public final declared-synchronized a(ILcom/tkay/core/common/f/ai;)V
    .locals 6

    monitor-enter p0

    const/4 v3, 0x0

    const-wide/16 v4, -0x1

    move-object v0, p0

    move v1, p1

    move-object v2, p2

    .line 67
    :try_start_0
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 68
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V
    .locals 6

    monitor-enter p0

    const-wide/16 v4, -0x1

    move-object v0, p0

    move v1, p1

    move-object v2, p2

    move-object v3, p3

    .line 71
    :try_start_0
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 72
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V
    .locals 9

    monitor-enter p0

    .line 1224
    :try_start_0
    instance-of v0, p2, Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_3

    const/4 v0, 0x4

    if-eq p1, v0, :cond_2

    const/4 v0, 0x6

    if-eq p1, v0, :cond_1

    const/16 v0, 0x15

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 1248
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->L()V

    goto :goto_0

    .line 1245
    :cond_1
    move-object v0, p2

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->d()V

    goto :goto_0

    .line 1227
    :cond_2
    move-object v0, p2

    check-cast v0, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->c()V

    .line 77
    :cond_3
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v8, Lcom/tkay/core/common/k/a$1;

    move-object v1, v8

    move-object v2, p0

    move-object v3, p2

    move v4, p1

    move-object v5, p3

    move-wide v6, p4

    invoke-direct/range {v1 .. v7}, Lcom/tkay/core/common/k/a$1;-><init>(Lcom/tkay/core/common/k/a;Lcom/tkay/core/common/f/ai;ILcom/tkay/core/common/f/aj;J)V

    invoke-virtual {v0, v8}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 97
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected final a(Ljava/util/List;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/e;",
            ">;)V"
        }
    .end annotation

    .line 258
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 260
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->u()I

    move-result v3

    const/4 v4, 0x1

    if-eq v3, v4, :cond_1

    const/4 v4, 0x2

    if-eq v3, v4, :cond_0

    .line 274
    new-instance v3, Lcom/tkay/core/common/h/o;

    iget-object v4, p0, Lcom/tkay/core/common/k/a;->e:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->u()I

    move-result v0

    invoke-direct {v3, v4, v0, p1}, Lcom/tkay/core/common/h/o;-><init>(Landroid/content/Context;ILjava/util/List;)V

    invoke-virtual {v3, v1, v2}, Lcom/tkay/core/common/h/o;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    .line 267
    :cond_0
    new-instance v3, Lcom/tkay/core/common/h/o;

    iget-object v5, p0, Lcom/tkay/core/common/k/a;->e:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->u()I

    move-result v6

    invoke-direct {v3, v5, v6, p1}, Lcom/tkay/core/common/h/o;-><init>(Landroid/content/Context;ILjava/util/List;)V

    invoke-virtual {v3, v1, v2}, Lcom/tkay/core/common/h/o;->a(ILcom/tkay/core/common/h/k;)V

    .line 269
    new-instance v1, Lcom/tkay/core/common/h/a/e;

    invoke-direct {v1, p1}, Lcom/tkay/core/common/h/a/e;-><init>(Ljava/util/List;)V

    .line 270
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->t()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v4, p1}, Lcom/tkay/core/common/h/a/e;->a(ILjava/lang/String;)V

    .line 271
    invoke-virtual {v1, v2}, Lcom/tkay/core/common/h/a/e;->a(Lcom/tkay/core/common/h/a/c$a;)V

    return-void

    .line 262
    :cond_1
    new-instance v1, Lcom/tkay/core/common/h/a/e;

    invoke-direct {v1, p1}, Lcom/tkay/core/common/h/a/e;-><init>(Ljava/util/List;)V

    .line 263
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->t()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v4, p1}, Lcom/tkay/core/common/h/a/e;->a(ILjava/lang/String;)V

    .line 264
    invoke-virtual {v1, v2}, Lcom/tkay/core/common/h/a/e;->a(Lcom/tkay/core/common/h/a/c$a;)V

    return-void

    .line 278
    :cond_2
    new-instance v0, Lcom/tkay/core/common/h/o;

    iget-object v3, p0, Lcom/tkay/core/common/k/a;->e:Landroid/content/Context;

    invoke-direct {v0, v3, v1, p1}, Lcom/tkay/core/common/h/o;-><init>(Landroid/content/Context;ILjava/util/List;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/h/o;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method
