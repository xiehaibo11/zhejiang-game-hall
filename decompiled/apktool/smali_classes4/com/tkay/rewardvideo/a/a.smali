.class public Lcom/tkay/rewardvideo/a/a;
.super Lcom/tkay/core/common/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f<",
        "Lcom/tkay/rewardvideo/a/f;",
        ">;"
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field m:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 48
    const-class v0, Lcom/tkay/rewardvideo/a/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/rewardvideo/a/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 62
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/f;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 183
    new-instance p1, Lcom/tkay/rewardvideo/a/a$2;

    invoke-direct {p1, p0}, Lcom/tkay/rewardvideo/a/a$2;-><init>(Lcom/tkay/rewardvideo/a/a;)V

    iput-object p1, p0, Lcom/tkay/rewardvideo/a/a;->m:Ljava/lang/Runnable;

    return-void
.end method

.method private static a(Lcom/tkay/rewardvideo/a/f;)Lcom/tkay/core/common/h;
    .locals 2

    .line 161
    new-instance v0, Lcom/tkay/rewardvideo/a/b;

    invoke-virtual {p0}, Lcom/tkay/rewardvideo/a/f;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/rewardvideo/a/b;-><init>(Landroid/content/Context;)V

    .line 162
    iget p0, p0, Lcom/tkay/rewardvideo/a/f;->d:I

    invoke-virtual {v0, p0}, Lcom/tkay/rewardvideo/a/b;->a(I)V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;
    .locals 3

    .line 52
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 53
    instance-of v2, v0, Lcom/tkay/rewardvideo/a/a;

    if-nez v2, :cond_1

    .line 54
    :cond_0
    new-instance v0, Lcom/tkay/rewardvideo/a/a;

    invoke-direct {v0, p0, p1}, Lcom/tkay/rewardvideo/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 55
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p0

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f;)V

    .line 57
    :cond_1
    check-cast v0, Lcom/tkay/rewardvideo/a/a;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/rewardvideo/a/a;)Ljava/lang/String;
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/rewardvideo/a/a;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/rewardvideo/a/a;)Landroid/content/Context;
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/rewardvideo/a/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/rewardvideo/a/a;)Landroid/content/Context;
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/rewardvideo/a/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/rewardvideo/a/a;)Landroid/content/Context;
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/rewardvideo/a/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method private m()V
    .locals 6

    .line 193
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->m:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/rewardvideo/a/a;->h:I

    int-to-double v2, v2

    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    invoke-static {v4, v5, v2, v3}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v2

    double-to-long v2, v2

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/api/TYAdStatusInfo;"
        }
    .end annotation

    .line 168
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object p2

    .line 169
    invoke-virtual {p0}, Lcom/tkay/rewardvideo/a/a;->c()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0, p2}, Lcom/tkay/rewardvideo/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v3, 0x5

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v1, p0

    move-object v2, p1

    .line 170
    invoke-virtual/range {v1 .. v6}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_0
    return-object p2
.end method

.method public final synthetic a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;
    .locals 2

    .line 45
    check-cast p1, Lcom/tkay/rewardvideo/a/f;

    .line 3161
    new-instance v0, Lcom/tkay/rewardvideo/a/b;

    invoke-virtual {p1}, Lcom/tkay/rewardvideo/a/f;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/rewardvideo/a/b;-><init>(Landroid/content/Context;)V

    .line 3162
    iget p1, p1, Lcom/tkay/rewardvideo/a/f;->d:I

    invoke-virtual {v0, p1}, Lcom/tkay/rewardvideo/a/b;->a(I)V

    return-object v0
.end method

.method protected final a()Ljava/lang/String;
    .locals 1

    const-string v0, "1"

    return-object v0
.end method

.method public final declared-synchronized a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/lang/String;",
            "Lcom/tkay/rewardvideo/api/TYRewardVideoListener;",
            "Lcom/tkay/core/api/TYEventInterface;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 66
    :try_start_0
    invoke-virtual {p0, p1, v0, v1, p5}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 68
    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_0

    .line 69
    invoke-virtual {p0, v4}, Lcom/tkay/rewardvideo/a/a;->a(Lcom/tkay/core/common/f/a;)V

    .line 73
    invoke-virtual {p0}, Lcom/tkay/rewardvideo/a/a;->f()V

    .line 76
    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->d()I

    move-result v0

    add-int/2addr v0, v1

    invoke-virtual {v4, v0}, Lcom/tkay/core/common/f/a;->a(I)V

    .line 79
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/rewardvideo/a/a$1;

    move-object v2, v1

    move-object v3, p0

    move-object v5, p2

    move-object v6, p5

    move-object v7, p1

    move-object v8, p4

    move-object v9, p3

    invoke-direct/range {v2 .. v9}, Lcom/tkay/rewardvideo/a/a$1;-><init>(Lcom/tkay/rewardvideo/a/a;Lcom/tkay/core/common/f/a;Ljava/lang/String;Ljava/util/Map;Landroid/app/Activity;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 118
    monitor-exit p0

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 124
    :try_start_1
    invoke-virtual {p0, p1}, Lcom/tkay/rewardvideo/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 125
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x7

    const/4 v3, 0x0

    const/4 v4, 0x0

    move-object v0, p0

    move-object v5, p5

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_1
    const-string p2, "4001"

    const-string p4, ""

    const-string p5, "No Cache."

    .line 128
    invoke-static {p2, p4, p5}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    if-eqz p3, :cond_2

    .line 130
    invoke-static {p1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p1

    invoke-interface {p3, p2, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 134
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I",
            "Lcom/tkay/core/common/b/a;",
            "Lcom/tkay/core/common/b/b;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 142
    new-instance v4, Lcom/tkay/rewardvideo/a/f;

    invoke-direct {v4}, Lcom/tkay/rewardvideo/a/f;-><init>()V

    .line 143
    invoke-virtual {v4, p1}, Lcom/tkay/rewardvideo/a/f;->a(Landroid/content/Context;)V

    .line 145
    iput p2, v4, Lcom/tkay/rewardvideo/a/f;->d:I

    .line 146
    iput-object p4, v4, Lcom/tkay/rewardvideo/a/f;->e:Lcom/tkay/core/common/b/b;

    if-eqz p5, :cond_0

    .line 149
    :try_start_0
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1, p5}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    iput-object p1, v4, Lcom/tkay/rewardvideo/a/f;->g:Ljava/util/Map;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 155
    :catchall_0
    :cond_0
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/rewardvideo/a/a;->c:Ljava/lang/String;

    const-string v2, "1"

    move-object v0, p0

    move-object v5, p3

    invoke-super/range {v0 .. v5}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V

    return-void
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 6

    .line 203
    invoke-super {p0, p1}, Lcom/tkay/core/common/f;->b(Lcom/tkay/core/api/AdError;)V

    .line 204
    invoke-virtual {p0}, Lcom/tkay/rewardvideo/a/a;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1193
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->m:Ljava/lang/Runnable;

    const-wide/high16 v2, 0x4000000000000000L    # 2.0

    iget v4, p0, Lcom/tkay/rewardvideo/a/a;->h:I

    int-to-double v4, v4

    invoke-static {v2, v3, v4, v5}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v2

    double-to-long v2, v2

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 208
    invoke-static {}, Lcom/tkay/rewardvideo/a/d;->a()Lcom/tkay/rewardvideo/a/d;

    move-result-object v0

    .line 1224
    iget-object v0, v0, Lcom/tkay/rewardvideo/a/d;->b:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    if-eqz v0, :cond_0

    .line 210
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->c:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;->onRewardVideoAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method

.method protected final j()Z
    .locals 2

    .line 177
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method protected final k()V
    .locals 2

    .line 198
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->m:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected final l()V
    .locals 2

    .line 218
    invoke-super {p0}, Lcom/tkay/core/common/f;->l()V

    .line 219
    invoke-virtual {p0}, Lcom/tkay/rewardvideo/a/a;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 220
    invoke-static {}, Lcom/tkay/rewardvideo/a/d;->a()Lcom/tkay/rewardvideo/a/d;

    move-result-object v0

    .line 2224
    iget-object v0, v0, Lcom/tkay/rewardvideo/a/d;->b:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    if-eqz v0, :cond_0

    .line 222
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/a;->c:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;->onRewardVideoAutoLoaded(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
