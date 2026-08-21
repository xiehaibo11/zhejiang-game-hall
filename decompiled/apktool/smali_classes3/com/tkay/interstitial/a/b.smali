.class public Lcom/tkay/interstitial/a/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile c:Lcom/tkay/interstitial/a/b;


# instance fields
.field a:Ljava/lang/String;

.field b:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

.field private d:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "InterstitialAuto"

    .line 23
    iput-object v0, p0, Lcom/tkay/interstitial/a/b;->a:Ljava/lang/String;

    .line 38
    new-instance v0, Lcom/tkay/interstitial/a/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/interstitial/a/b$1;-><init>(Lcom/tkay/interstitial/a/b;)V

    iput-object v0, p0, Lcom/tkay/interstitial/a/b;->b:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    return-void
.end method

.method public static a()Lcom/tkay/interstitial/a/b;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/interstitial/a/b;->c:Lcom/tkay/interstitial/a/b;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/interstitial/a/b;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/interstitial/a/b;->c:Lcom/tkay/interstitial/a/b;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/interstitial/a/b;

    invoke-direct {v1}, Lcom/tkay/interstitial/a/b;-><init>()V

    sput-object v1, Lcom/tkay/interstitial/a/b;->c:Lcom/tkay/interstitial/a/b;

    .line 33
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/interstitial/a/b;->c:Lcom/tkay/interstitial/a/b;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/interstitial/a/b;)Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/tkay/interstitial/a/b;->d:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    return-object p0
.end method

.method private a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V
    .locals 1

    const-string v0, ""

    .line 121
    invoke-virtual {p0, p1, p2, v0, p3}, Lcom/tkay/interstitial/a/b;->a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V

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

    .line 186
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 189
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "3"

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

    .line 114
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 117
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

    .line 87
    :cond_0
    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p0, v1

    .line 88
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 91
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 93
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v2, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Z)V

    .line 94
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v2}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v4

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x3

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    invoke-virtual/range {v4 .. v9}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private b()Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/interstitial/a/b;->b:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    return-object v0
.end method

.method public static varargs b([Ljava/lang/String;)V
    .locals 5

    if-nez p0, :cond_0

    return-void

    .line 104
    :cond_0
    array-length v0, p0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_2

    aget-object v3, p0, v2

    .line 105
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 108
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v4

    invoke-virtual {v4, v3, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Z)V

    .line 109
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v3}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/interstitial/a/a;->k()V

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public static c(Ljava/lang/String;)Ljava/util/List;
    .locals 1
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

    .line 178
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 180
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private d(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 2

    .line 194
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 195
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 196
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 200
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 201
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v1

    .line 197
    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/tkay/interstitial/a/b;->a:Ljava/lang/String;

    const-string v0, "SDK init error!"

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V
    .locals 8

    .line 125
    sget-object v0, Lcom/tkay/core/common/b/f$i;->t:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->y:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v3, ""

    invoke-static {p2, v0, v1, v2, v3}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 126
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 127
    iget-object p1, p0, Lcom/tkay/interstitial/a/b;->a:Ljava/lang/String;

    const-string p2, "PlacementId is Empty!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 131
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 132
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 133
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    if-nez p1, :cond_2

    .line 143
    iget-object v0, p0, Lcom/tkay/interstitial/a/b;->a:Ljava/lang/String;

    const-string v1, "Interstitial Show Activity is null."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 146
    :cond_2
    invoke-static {p1, p2}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v2

    new-instance v5, Lcom/tkay/interstitial/a/c;

    invoke-direct {v5, p4}, Lcom/tkay/interstitial/a/c;-><init>(Lcom/tkay/interstitial/api/TYInterstitialAutoEventListener;)V

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v3, p1

    move-object v4, p3

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/interstitial/a/a;->a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V

    return-void

    .line 134
    :cond_3
    :goto_0
    iget-object p1, p0, Lcom/tkay/interstitial/a/b;->a:Ljava/lang/String;

    const-string p2, "Show error: SDK init error!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final a(Landroid/content/Context;[Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;)V
    .locals 11

    .line 66
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 67
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Landroid/app/Activity;)V

    :cond_0
    if-eqz p2, :cond_2

    .line 71
    array-length v0, p2

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p2, v1

    .line 72
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 74
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v2, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Z)V

    .line 75
    invoke-static {p1, v2}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v5

    const/4 v7, 0x3

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    move-object v6, p1

    invoke-virtual/range {v5 .. v10}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 80
    :cond_2
    iput-object p3, p0, Lcom/tkay/interstitial/a/b;->d:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 5

    .line 151
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    .line 152
    invoke-direct {p0, p1}, Lcom/tkay/interstitial/a/b;->d(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    return v1

    .line 156
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->isReady()Z

    move-result v1

    .line 159
    :cond_1
    sget-object v0, Lcom/tkay/core/common/b/f$i;->t:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->z:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v3

    const-string v4, ""

    invoke-static {p1, v0, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 5

    .line 165
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-nez v0, :cond_0

    .line 166
    invoke-direct {p0, p1}, Lcom/tkay/interstitial/a/b;->d(Ljava/lang/String;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_1

    .line 168
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    goto :goto_0

    .line 171
    :cond_0
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    .line 173
    :cond_1
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->t:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->A:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, ""

    invoke-static {p1, v1, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method
