.class public Lcom/tkay/core/common/t;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/core/common/t;


# instance fields
.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/v;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/v;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final f:I

.field private final g:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 33
    const-class v0, Lcom/tkay/core/common/t;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/t;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x5

    .line 42
    iput v0, p0, Lcom/tkay/core/common/t;->f:I

    const/16 v0, 0x1f4

    .line 43
    iput v0, p0, Lcom/tkay/core/common/t;->g:I

    .line 47
    new-instance v0, Ljava/util/ArrayList;

    const/16 v1, 0x8

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/t;
    .locals 2

    .line 51
    sget-object v0, Lcom/tkay/core/common/t;->b:Lcom/tkay/core/common/t;

    if-nez v0, :cond_1

    .line 52
    const-class v0, Lcom/tkay/core/common/t;

    monitor-enter v0

    .line 53
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/t;->b:Lcom/tkay/core/common/t;

    if-nez v1, :cond_0

    .line 54
    new-instance v1, Lcom/tkay/core/common/t;

    invoke-direct {v1}, Lcom/tkay/core/common/t;-><init>()V

    sput-object v1, Lcom/tkay/core/common/t;->b:Lcom/tkay/core/common/t;

    .line 55
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 57
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/t;->b:Lcom/tkay/core/common/t;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/t;)Ljava/util/List;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    return-object p0
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/v;)V
    .locals 2

    monitor-enter p0

    .line 272
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "delete: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 274
    iget-object v0, p0, Lcom/tkay/core/common/t;->c:Ljava/util/Map;

    iget-object v1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 275
    iget-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 277
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/i;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/i;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/c/i;->b(Lcom/tkay/core/common/f/v;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 278
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/v;Z)V
    .locals 4

    monitor-enter p0

    .line 109
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p1, Lcom/tkay/core/common/f/v;->f:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    .line 110
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "resendNoticeUrl: do nothing because offer is out date: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 113
    iget-object v0, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    iget-object v1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    if-eqz p2, :cond_0

    .line 116
    invoke-direct {p0, p1}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 119
    :cond_0
    monitor-exit p0

    return-void

    .line 123
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    iget-object v1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 124
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "resendNoticeUrl: do nothing because it is loading... "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 125
    monitor-exit p0

    return-void

    .line 127
    :cond_2
    :try_start_2
    iget-object v0, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    iget-object v1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const/4 v0, 0x5

    if-eqz p2, :cond_4

    .line 133
    iget v1, p1, Lcom/tkay/core/common/f/v;->g:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p1, Lcom/tkay/core/common/f/v;->g:I

    .line 134
    iget v1, p1, Lcom/tkay/core/common/f/v;->g:I

    if-lt v1, v0, :cond_3

    .line 135
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 138
    invoke-direct {p0, p1}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;)V

    goto :goto_0

    .line 142
    :cond_3
    invoke-direct {p0, p1}, Lcom/tkay/core/common/t;->b(Lcom/tkay/core/common/f/v;)V

    goto :goto_0

    .line 147
    :cond_4
    iget v1, p1, Lcom/tkay/core/common/f/v;->g:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p1, Lcom/tkay/core/common/f/v;->g:I

    .line 148
    iget v1, p1, Lcom/tkay/core/common/f/v;->g:I

    if-lt v1, v0, :cond_5

    .line 149
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 152
    iget-object p2, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    iget-object p1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {p2, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 154
    monitor-exit p0

    return-void

    .line 158
    :cond_5
    :goto_0
    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "resendNoticeUrl: start to send notice: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 161
    new-instance v0, Lcom/tkay/core/common/h/m;

    invoke-direct {v0, p1}, Lcom/tkay/core/common/h/m;-><init>(Lcom/tkay/core/common/f/v;)V

    const/4 v1, 0x0

    .line 162
    new-instance v2, Lcom/tkay/core/common/t$1;

    invoke-direct {v2, p0, p1, p2}, Lcom/tkay/core/common/t$1;-><init>(Lcom/tkay/core/common/t;Lcom/tkay/core/common/f/v;Z)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/h/m;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 207
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/tkay/core/common/t;Lcom/tkay/core/common/f/v;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;)V

    return-void
.end method

.method public static a(I)Z
    .locals 3

    const/4 v0, 0x1

    packed-switch p0, :pswitch_data_0

    const/4 v1, 0x0

    goto :goto_0

    :pswitch_0
    move v1, v0

    :goto_0
    if-nez v1, :cond_1

    const/16 v2, -0x63

    if-lt p0, v2, :cond_0

    const/16 v2, 0xc8

    if-lt p0, v2, :cond_2

    :cond_0
    const/16 v2, 0x190

    if-lt p0, v2, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    :cond_2
    :goto_1
    return v0

    :pswitch_data_0
    .packed-switch -0x3eb
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method private declared-synchronized b(Lcom/tkay/core/common/f/v;)V
    .locals 3

    monitor-enter p0

    .line 283
    :try_start_0
    iget-object v0, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 284
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p1, Lcom/tkay/core/common/f/v;->e:J

    .line 285
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p1, Lcom/tkay/core/common/f/v;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p1, Lcom/tkay/core/common/f/v;->e:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    .line 287
    iget-object v0, p0, Lcom/tkay/core/common/t;->c:Ljava/util/Map;

    iget-object v1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 288
    iget-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 291
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "insertOrUpdate: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 292
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/i;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/i;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/c/i;->a(Lcom/tkay/core/common/f/v;)J

    .line 296
    iget-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/16 v1, 0x1f4

    if-le v0, v1, :cond_1

    .line 297
    iget-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/v;

    .line 299
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "insertOrUpdate,  exceeded the maximum number of records, start to delete: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 302
    iget-object v1, p0, Lcom/tkay/core/common/t;->e:Ljava/util/List;

    iget-object p1, p1, Lcom/tkay/core/common/f/v;->a:Ljava/lang/String;

    invoke-interface {v1, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 304
    invoke-direct {p0, v0}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 307
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic b(Lcom/tkay/core/common/t;Lcom/tkay/core/common/f/v;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1}, Lcom/tkay/core/common/t;->b(Lcom/tkay/core/common/f/v;)V

    return-void
.end method

.method private declared-synchronized c()V
    .locals 2

    monitor-enter p0

    .line 245
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/t;->c:Ljava/util/Map;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    if-nez v0, :cond_0

    .line 246
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/i;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/c/i;->c()Lcom/tkay/core/common/c/i$a;

    move-result-object v0

    .line 248
    iget-object v1, v0, Lcom/tkay/core/common/c/i$a;->b:Ljava/util/Map;

    iput-object v1, p0, Lcom/tkay/core/common/t;->c:Ljava/util/Map;

    .line 249
    iget-object v0, v0, Lcom/tkay/core/common/c/i$a;->a:Ljava/util/List;

    iput-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 252
    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 255
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tkay/core/common/t;->c:Ljava/util/Map;

    if-nez v0, :cond_1

    .line 256
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/t;->c:Ljava/util/Map;

    .line 258
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    if-nez v0, :cond_2

    .line 259
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 269
    :cond_2
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 2

    monitor-enter p0

    .line 93
    :try_start_0
    new-instance v0, Lcom/tkay/core/common/f/v;

    invoke-direct {v0}, Lcom/tkay/core/common/f/v;-><init>()V

    const/4 v1, 0x2

    .line 94
    iput v1, v0, Lcom/tkay/core/common/f/v;->b:I

    .line 95
    iput-object p1, v0, Lcom/tkay/core/common/f/v;->d:Ljava/lang/String;

    .line 96
    iput-object p2, v0, Lcom/tkay/core/common/f/v;->c:Ljava/lang/String;

    .line 97
    iput-wide p3, v0, Lcom/tkay/core/common/f/v;->f:J

    .line 99
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "reSendNow: "

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x0

    .line 102
    invoke-direct {p0, v0, p1}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 103
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b()V
    .locals 4

    monitor-enter p0

    .line 214
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/t;->c()V

    .line 216
    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/tkay/core/common/t;->d:Ljava/util/List;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 219
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 222
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 223
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 224
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/v;

    .line 226
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "tryToReSendNoticeUrl: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/tkay/core/common/f/v;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    .line 228
    invoke-direct {p0, v1, v2}, Lcom/tkay/core/common/t;->a(Lcom/tkay/core/common/f/v;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 239
    :cond_0
    monitor-exit p0

    return-void

    .line 241
    :catchall_0
    monitor-exit p0

    return-void
.end method
