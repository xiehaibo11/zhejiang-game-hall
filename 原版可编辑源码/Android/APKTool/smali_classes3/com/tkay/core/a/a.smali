.class public final Lcom/tkay/core/a/a;
.super Ljava/lang/Object;


# static fields
.field private static e:Lcom/tkay/core/a/a;


# instance fields
.field a:Lcom/tkay/core/common/c/l;

.field b:Ljava/text/SimpleDateFormat;

.field c:Ljava/text/SimpleDateFormat;

.field d:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    invoke-static {p1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/l;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/l;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    .line 45
    iput-object p1, p0, Lcom/tkay/core/a/a;->d:Landroid/content/Context;

    .line 46
    new-instance p1, Ljava/text/SimpleDateFormat;

    const-string v0, "yyyyMMdd"

    invoke-direct {p1, v0}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    .line 47
    new-instance p1, Ljava/text/SimpleDateFormat;

    const-string v0, "yyyyMMddHH"

    invoke-direct {p1, v0}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/a/a;
    .locals 1

    .line 37
    sget-object v0, Lcom/tkay/core/a/a;->e:Lcom/tkay/core/a/a;

    if-nez v0, :cond_0

    .line 38
    new-instance v0, Lcom/tkay/core/a/a;

    invoke-direct {v0, p0}, Lcom/tkay/core/a/a;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/tkay/core/a/a;->e:Lcom/tkay/core/a/a;

    .line 40
    :cond_0
    sget-object p0, Lcom/tkay/core/a/a;->e:Lcom/tkay/core/a/a;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;
    .locals 5

    .line 149
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 150
    iget-object v2, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    .line 151
    iget-object v3, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 153
    iget-object v1, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    invoke-virtual {v1, p1, p2, v2, v0}, Lcom/tkay/core/common/c/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;)Lcom/tkay/core/common/f/ad;
    .locals 5

    .line 132
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 133
    iget-object v2, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    .line 134
    iget-object v3, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 136
    iget-object v1, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    invoke-virtual {v1, p1, v2, v0}, Lcom/tkay/core/common/c/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad;

    move-result-object p1

    return-object p1
.end method

.method public final a(I)Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/ad;",
            ">;"
        }
    .end annotation

    .line 164
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 165
    iget-object v2, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v3, Ljava/util/Date;

    invoke-direct {v3, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v2, v3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    .line 166
    iget-object v3, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4, v0, v1}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 167
    iget-object v1, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    invoke-virtual {v1, p1, v2, v0}, Lcom/tkay/core/common/c/l;->a(ILjava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method public final a()V
    .locals 2

    .line 55
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/a/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/a/a$1;-><init>(Lcom/tkay/core/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 173
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 174
    monitor-enter v0

    .line 175
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 176
    iget-object v3, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v4, Ljava/util/Date;

    invoke-direct {v4, v1, v2}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v3, v4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v3

    .line 177
    iget-object v4, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    new-instance v5, Ljava/util/Date;

    invoke-direct {v5, v1, v2}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v4, v5}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v4

    .line 179
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    .line 181
    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;

    move-result-object v5

    if-nez v5, :cond_0

    .line 185
    new-instance v5, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {v5}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    .line 186
    iput-object p3, v5, Lcom/tkay/core/common/f/ad$a;->a:Ljava/lang/String;

    .line 189
    :cond_0
    iget-object p3, v5, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    invoke-static {v3, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    const/4 v6, 0x1

    if-nez p3, :cond_1

    .line 190
    iput v6, v5, Lcom/tkay/core/common/f/ad$a;->d:I

    .line 191
    iput-object v3, v5, Lcom/tkay/core/common/f/ad$a;->c:Ljava/lang/String;

    goto :goto_0

    .line 193
    :cond_1
    iget p3, v5, Lcom/tkay/core/common/f/ad$a;->d:I

    add-int/2addr p3, v6

    iput p3, v5, Lcom/tkay/core/common/f/ad$a;->d:I

    .line 196
    :goto_0
    iget-object p3, v5, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    invoke-static {v4, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    .line 197
    iput v6, v5, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 198
    iput-object v4, v5, Lcom/tkay/core/common/f/ad$a;->b:Ljava/lang/String;

    goto :goto_1

    .line 200
    :cond_2
    iget p3, v5, Lcom/tkay/core/common/f/ad$a;->e:I

    add-int/2addr p3, v6

    iput p3, v5, Lcom/tkay/core/common/f/ad$a;->e:I

    .line 203
    :goto_1
    iput-wide v1, v5, Lcom/tkay/core/common/f/ad$a;->f:J

    .line 205
    iget-object p3, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    invoke-virtual {p3, p1, p2, v5}, Lcom/tkay/core/common/c/l;->a(ILjava/lang/String;Lcom/tkay/core/common/f/ad$a;)J

    .line 207
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final a(Lcom/tkay/core/c/d;Ljava/lang/String;)Z
    .locals 8

    .line 72
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ac()J

    move-result-wide v0

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 73
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ad()J

    move-result-wide v4

    cmp-long v0, v4, v2

    if-nez v0, :cond_0

    return v1

    .line 77
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 78
    iget-object v0, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v6, Ljava/util/Date;

    invoke-direct {v6, v4, v5}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v6}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 79
    iget-object v6, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    new-instance v7, Ljava/util/Date;

    invoke-direct {v7, v4, v5}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v6, v7}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v4

    .line 81
    iget-object v5, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    invoke-virtual {v5, p2, v0, v4}, Lcom/tkay/core/common/c/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 82
    iget v0, p2, Lcom/tkay/core/common/f/ad;->c:I

    goto :goto_0

    :cond_1
    move v0, v1

    :goto_0
    if-eqz p2, :cond_2

    .line 83
    iget p2, p2, Lcom/tkay/core/common/f/ad;->d:I

    goto :goto_1

    :cond_2
    move p2, v1

    .line 85
    :goto_1
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ac()J

    move-result-wide v4

    cmp-long v4, v4, v2

    if-eqz v4, :cond_3

    int-to-long v4, v0

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ac()J

    move-result-wide v6

    cmp-long v0, v4, v6

    if-gez v0, :cond_4

    .line 86
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ad()J

    move-result-wide v4

    cmp-long v0, v4, v2

    if-eqz v0, :cond_5

    int-to-long v2, p2

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ad()J

    move-result-wide p1

    cmp-long p1, v2, p1

    if-gez p1, :cond_4

    goto :goto_2

    :cond_4
    const/4 p1, 0x1

    return p1

    :cond_5
    :goto_2
    return v1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z
    .locals 7

    .line 101
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->f()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, -0x1

    if-ne v0, v2, :cond_0

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->e()I

    move-result v0

    if-ne v0, v2, :cond_0

    return v1

    .line 105
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 106
    iget-object v0, p0, Lcom/tkay/core/a/a;->b:Ljava/text/SimpleDateFormat;

    new-instance v5, Ljava/util/Date;

    invoke-direct {v5, v3, v4}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v5}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 107
    iget-object v5, p0, Lcom/tkay/core/a/a;->c:Ljava/text/SimpleDateFormat;

    new-instance v6, Ljava/util/Date;

    invoke-direct {v6, v3, v4}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v5, v6}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v3

    .line 109
    iget-object v4, p0, Lcom/tkay/core/a/a;->a:Lcom/tkay/core/common/c/l;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, p1, v5, v0, v3}, Lcom/tkay/core/common/c/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;

    move-result-object p1

    if-nez p1, :cond_1

    .line 113
    new-instance p1, Lcom/tkay/core/common/f/ad$a;

    invoke-direct {p1}, Lcom/tkay/core/common/f/ad$a;-><init>()V

    .line 116
    :cond_1
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->f()I

    move-result v0

    if-eq v0, v2, :cond_2

    iget v0, p1, Lcom/tkay/core/common/f/ad$a;->e:I

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->f()I

    move-result v3

    if-ge v0, v3, :cond_3

    .line 117
    :cond_2
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->e()I

    move-result v0

    if-eq v0, v2, :cond_4

    iget p1, p1, Lcom/tkay/core/common/f/ad$a;->d:I

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->e()I

    move-result p2

    if-ge p1, p2, :cond_3

    goto :goto_0

    :cond_3
    const/4 p1, 0x1

    return p1

    :cond_4
    :goto_0
    return v1
.end method
