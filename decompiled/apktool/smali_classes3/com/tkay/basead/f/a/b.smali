.class public final Lcom/tkay/basead/f/a/b;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/tkay/basead/f/a/b;


# instance fields
.field private b:Landroid/content/Context;

.field private c:Ljava/text/SimpleDateFormat;

.field private d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/basead/c/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 31
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/f/a/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    .line 34
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/f/a/b;->b:Landroid/content/Context;

    .line 35
    new-instance p1, Ljava/text/SimpleDateFormat;

    const-string v0, "yyyyMMdd"

    invoke-direct {p1, v0}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/basead/f/a/b;->c:Ljava/text/SimpleDateFormat;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/f/a/b;)Landroid/content/Context;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/tkay/basead/f/a/b;->b:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/basead/f/a/b;
    .locals 1

    .line 39
    sget-object v0, Lcom/tkay/basead/f/a/b;->a:Lcom/tkay/basead/f/a/b;

    if-nez v0, :cond_0

    .line 40
    new-instance v0, Lcom/tkay/basead/f/a/b;

    invoke-direct {v0, p0}, Lcom/tkay/basead/f/a/b;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/tkay/basead/f/a/b;->a:Lcom/tkay/basead/f/a/b;

    .line 42
    :cond_0
    sget-object p0, Lcom/tkay/basead/f/a/b;->a:Lcom/tkay/basead/f/a/b;

    return-object p0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 4

    .line 123
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 124
    iget-object v2, p0, Lcom/tkay/basead/f/a/b;->c:Ljava/text/SimpleDateFormat;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 125
    iget-object v1, p0, Lcom/tkay/basead/f/a/b;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/basead/b/c;->a(Landroid/content/Context;)Lcom/tkay/basead/b/c;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/basead/b/c;->b(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 126
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    if-eqz v0, :cond_0

    .line 128
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/basead/c/c;

    .line 129
    iget-object v2, v2, Lcom/tkay/basead/c/c;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 132
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final a(Lcom/tkay/core/common/f/r;)V
    .locals 5

    .line 51
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 52
    iget-object v2, p0, Lcom/tkay/basead/f/a/b;->c:Ljava/text/SimpleDateFormat;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    .line 53
    invoke-virtual {p0, p1}, Lcom/tkay/basead/f/a/b;->d(Lcom/tkay/core/common/f/r;)Lcom/tkay/basead/c/c;

    move-result-object p1

    .line 55
    iget-object v3, p1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_0

    .line 57
    iget v2, p1, Lcom/tkay/basead/c/c;->d:I

    add-int/2addr v2, v4

    iput v2, p1, Lcom/tkay/basead/c/c;->d:I

    goto :goto_0

    .line 60
    :cond_0
    iput v4, p1, Lcom/tkay/basead/c/c;->d:I

    .line 61
    iput-object v2, p1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    .line 65
    :goto_0
    iput-wide v0, p1, Lcom/tkay/basead/c/c;->e:J

    .line 66
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/f/a/b$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/f/a/b$1;-><init>(Lcom/tkay/basead/f/a/b;Lcom/tkay/basead/c/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 2

    .line 144
    iget-object v0, p0, Lcom/tkay/basead/f/a/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 149
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->F()Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 151
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-gtz v1, :cond_1

    goto :goto_0

    .line 154
    :cond_1
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/r;

    .line 155
    invoke-virtual {p0, v1}, Lcom/tkay/basead/f/a/b;->b(Lcom/tkay/core/common/f/r;)Z

    move-result v1

    if-nez v1, :cond_2

    goto :goto_0

    :cond_3
    const/4 v0, 0x1

    :cond_4
    :goto_0
    return v0
.end method

.method public final b(Lcom/tkay/core/common/f/r;)Z
    .locals 4

    .line 86
    invoke-virtual {p0, p1}, Lcom/tkay/basead/f/a/b;->d(Lcom/tkay/core/common/f/r;)Lcom/tkay/basead/c/c;

    move-result-object v0

    .line 1191
    iget v1, p1, Lcom/tkay/core/common/f/r;->R:I

    const/4 v2, 0x0

    const/4 v3, -0x1

    if-ne v1, v3, :cond_0

    return v2

    .line 92
    :cond_0
    iget v0, v0, Lcom/tkay/basead/c/c;->d:I

    .line 2191
    iget p1, p1, Lcom/tkay/core/common/f/r;->R:I

    if-lt v0, p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    return v2
.end method

.method public final c(Lcom/tkay/core/common/f/r;)Z
    .locals 4

    .line 106
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 107
    invoke-virtual {p0, p1}, Lcom/tkay/basead/f/a/b;->d(Lcom/tkay/core/common/f/r;)Lcom/tkay/basead/c/c;

    move-result-object v2

    .line 109
    iget-wide v2, v2, Lcom/tkay/basead/c/c;->e:J

    sub-long/2addr v0, v2

    .line 2199
    iget-wide v2, p1, Lcom/tkay/core/common/f/r;->S:J

    cmp-long p1, v0, v2

    if-gtz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final d(Lcom/tkay/core/common/f/r;)Lcom/tkay/basead/c/c;
    .locals 5

    .line 173
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 174
    iget-object v2, p0, Lcom/tkay/basead/f/a/b;->c:Ljava/text/SimpleDateFormat;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 175
    iget-object v1, p0, Lcom/tkay/basead/f/a/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/r;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/basead/c/c;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    .line 177
    iget-object v1, p0, Lcom/tkay/basead/f/a/b;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/basead/b/c;->a(Landroid/content/Context;)Lcom/tkay/basead/b/c;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/r;->p()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/basead/b/c;->a(Ljava/lang/String;)Lcom/tkay/basead/c/c;

    move-result-object v1

    if-nez v1, :cond_0

    .line 179
    new-instance v1, Lcom/tkay/basead/c/c;

    invoke-direct {v1}, Lcom/tkay/basead/c/c;-><init>()V

    .line 180
    invoke-virtual {p1}, Lcom/tkay/core/common/f/r;->p()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v1, Lcom/tkay/basead/c/c;->a:Ljava/lang/String;

    .line 3191
    iget v3, p1, Lcom/tkay/core/common/f/r;->R:I

    .line 181
    iput v3, v1, Lcom/tkay/basead/c/c;->b:I

    .line 3199
    iget-wide v3, p1, Lcom/tkay/core/common/f/r;->S:J

    .line 182
    iput-wide v3, v1, Lcom/tkay/basead/c/c;->c:J

    const-wide/16 v3, 0x0

    .line 183
    iput-wide v3, v1, Lcom/tkay/basead/c/c;->e:J

    .line 184
    iput v2, v1, Lcom/tkay/basead/c/c;->d:I

    .line 185
    iput-object v0, v1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    .line 187
    :cond_0
    iget-object v3, p0, Lcom/tkay/basead/f/a/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/r;->p()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 191
    :cond_1
    iget-object p1, v1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 192
    iput-object v0, v1, Lcom/tkay/basead/c/c;->f:Ljava/lang/String;

    .line 193
    iput v2, v1, Lcom/tkay/basead/c/c;->d:I

    :cond_2
    return-object v1
.end method
