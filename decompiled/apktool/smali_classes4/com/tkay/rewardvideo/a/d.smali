.class public Lcom/tkay/rewardvideo/a/d;
.super Ljava/lang/Object;


# static fields
.field private static volatile c:Lcom/tkay/rewardvideo/a/d;


# instance fields
.field a:Ljava/lang/String;

.field b:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

.field private d:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "RewardVideoAuto"

    .line 26
    iput-object v0, p0, Lcom/tkay/rewardvideo/a/d;->a:Ljava/lang/String;

    .line 41
    new-instance v0, Lcom/tkay/rewardvideo/a/d$1;

    invoke-direct {v0, p0}, Lcom/tkay/rewardvideo/a/d$1;-><init>(Lcom/tkay/rewardvideo/a/d;)V

    iput-object v0, p0, Lcom/tkay/rewardvideo/a/d;->b:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    return-void
.end method

.method public static a()Lcom/tkay/rewardvideo/a/d;
    .locals 2

    .line 32
    sget-object v0, Lcom/tkay/rewardvideo/a/d;->c:Lcom/tkay/rewardvideo/a/d;

    if-nez v0, :cond_1

    .line 33
    const-class v0, Lcom/tkay/rewardvideo/a/d;

    monitor-enter v0

    .line 34
    :try_start_0
    sget-object v1, Lcom/tkay/rewardvideo/a/d;->c:Lcom/tkay/rewardvideo/a/d;

    if-nez v1, :cond_0

    .line 35
    new-instance v1, Lcom/tkay/rewardvideo/a/d;

    invoke-direct {v1}, Lcom/tkay/rewardvideo/a/d;-><init>()V

    sput-object v1, Lcom/tkay/rewardvideo/a/d;->c:Lcom/tkay/rewardvideo/a/d;

    .line 36
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 38
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/rewardvideo/a/d;->c:Lcom/tkay/rewardvideo/a/d;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/rewardvideo/a/d;)Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/rewardvideo/a/d;->d:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    return-object p0
.end method

.method private a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;)V
    .locals 1

    const-string v0, ""

    .line 128
    invoke-virtual {p0, p1, p2, v0, p3}, Lcom/tkay/rewardvideo/a/d;->a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 204
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 207
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, p0, p1, v1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 121
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 124
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static varargs a([Ljava/lang/String;)V
    .locals 10

    if-nez p0, :cond_0

    return-void

    .line 94
    :cond_0
    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p0, v1

    .line 95
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 98
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 100
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v2, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Z)V

    .line 101
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v4

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x3

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private b()Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;
    .locals 1

    .line 224
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d;->b:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    return-object v0
.end method

.method public static varargs b([Ljava/lang/String;)V
    .locals 5

    if-nez p0, :cond_0

    return-void

    .line 110
    :cond_0
    array-length v0, p0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_2

    aget-object v3, p0, v2

    .line 111
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 114
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v4

    invoke-virtual {v4, v3, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Z)V

    .line 115
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/rewardvideo/a/a;->k()V

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private d(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 2

    .line 212
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 213
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 214
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 218
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 219
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v1

    .line 215
    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/tkay/rewardvideo/a/d;->a:Ljava/lang/String;

    const-string v0, "SDK init error!"

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;)V
    .locals 8

    .line 132
    sget-object v0, Lcom/tkay/core/common/b/f$i;->u:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->y:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v3, ""

    invoke-static {p2, v0, v1, v2, v3}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "9999"

    if-eqz v0, :cond_1

    const-string v0, "placementId is empty."

    .line 135
    invoke-static {v2, v3, v0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    if-eqz p4, :cond_0

    .line 137
    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v4

    invoke-virtual {p4, v0, v4}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;->onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    .line 139
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d;->a:Ljava/lang/String;

    const-string v4, "PlacementId is Empty!"

    invoke-static {v0, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 142
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 143
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 144
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    if-nez p1, :cond_3

    .line 156
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/d;->a:Ljava/lang/String;

    const-string v1, "RewardedVideo Show Activity is null."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 159
    :cond_3
    invoke-static {p1, p2}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v2

    new-instance v5, Lcom/tkay/rewardvideo/a/c;

    invoke-direct {v5, p4}, Lcom/tkay/rewardvideo/a/c;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;)V

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v3, p1

    move-object v4, p3

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V

    return-void

    :cond_4
    :goto_0
    const-string p1, "sdk init error"

    .line 145
    invoke-static {v2, v3, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    if-eqz p4, :cond_5

    .line 147
    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p2

    invoke-virtual {p4, p1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAutoEventListener;->onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    .line 149
    :cond_5
    iget-object p1, p0, Lcom/tkay/rewardvideo/a/d;->a:Ljava/lang/String;

    const-string p2, "SDK init error!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final a(Landroid/content/Context;[Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;)V
    .locals 11

    .line 69
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 70
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Landroid/app/Activity;)V

    :cond_0
    if-eqz p2, :cond_2

    .line 74
    array-length v0, p2

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p2, v1

    .line 75
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 78
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 80
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v2, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Z)V

    .line 81
    invoke-static {p1, v2}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v5

    const/4 v7, 0x3

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    move-object v6, p1

    .line 82
    invoke-virtual/range {v5 .. v10}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 87
    :cond_2
    iput-object p3, p0, Lcom/tkay/rewardvideo/a/d;->d:Lcom/tkay/rewardvideo/api/TYRewardVideoAutoLoadListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 5

    .line 164
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    .line 165
    invoke-direct {p0, p1}, Lcom/tkay/rewardvideo/a/d;->d(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    return v1

    .line 169
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->isReady()Z

    move-result v1

    .line 172
    :cond_1
    sget-object v0, Lcom/tkay/core/common/b/f$i;->u:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->z:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v3

    const-string v4, ""

    invoke-static {p1, v0, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 5

    .line 178
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 179
    invoke-direct {p0, p1}, Lcom/tkay/rewardvideo/a/d;->d(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_1

    .line 181
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    goto :goto_0

    .line 184
    :cond_0
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    .line 186
    :cond_1
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->u:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->A:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, ""

    invoke-static {p1, v1, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public final c(Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYAdInfo;",
            ">;"
        }
    .end annotation

    .line 191
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 192
    iget-object p1, p0, Lcom/tkay/rewardvideo/a/d;->a:Ljava/lang/String;

    const-string v0, "PlacementId is empty."

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 196
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 198
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v1
.end method
