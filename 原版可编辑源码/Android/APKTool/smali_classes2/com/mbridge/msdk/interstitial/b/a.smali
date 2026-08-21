.class public Lcom/mbridge/msdk/interstitial/b/a;
.super Ljava/lang/Object;
.source "InterstitialCamapignCache.java"


# static fields
.field private static final a:Ljava/lang/String;

.field private static c:Lcom/mbridge/msdk/interstitial/b/a;


# instance fields
.field private b:Lcom/mbridge/msdk/foundation/db/f;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    const-class v0, Lcom/mbridge/msdk/interstitial/b/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/interstitial/b/a;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 24
    sput-object v0, Lcom/mbridge/msdk/interstitial/b/a;->c:Lcom/mbridge/msdk/interstitial/b/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 30
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    goto :goto_0

    .line 32
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/interstitial/b/a;->a:Ljava/lang/String;

    const-string v1, "InterstitialCamapignCache get Context is null"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 35
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static a()Lcom/mbridge/msdk/interstitial/b/a;
    .locals 2

    .line 40
    sget-object v0, Lcom/mbridge/msdk/interstitial/b/a;->c:Lcom/mbridge/msdk/interstitial/b/a;

    if-nez v0, :cond_1

    .line 42
    :try_start_0
    const-class v0, Lcom/mbridge/msdk/interstitial/b/a;

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 43
    :try_start_1
    sget-object v1, Lcom/mbridge/msdk/interstitial/b/a;->c:Lcom/mbridge/msdk/interstitial/b/a;

    if-nez v1, :cond_0

    .line 44
    new-instance v1, Lcom/mbridge/msdk/interstitial/b/a;

    invoke-direct {v1}, Lcom/mbridge/msdk/interstitial/b/a;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/interstitial/b/a;->c:Lcom/mbridge/msdk/interstitial/b/a;

    .line 46
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    move-exception v0

    .line 48
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 51
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/interstitial/b/a;->c:Lcom/mbridge/msdk/interstitial/b/a;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;I)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 62
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 63
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v1, p1, p2, v2, v3}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;III)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 65
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 67
    :try_start_1
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 68
    invoke-interface {p2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :cond_0
    move-object v0, p2

    goto :goto_2

    :catch_0
    move-exception p1

    move-object v0, p2

    goto :goto_1

    :catch_1
    move-exception p1

    .line 73
    :goto_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_2
    return-object v0
.end method

.method public final declared-synchronized a(JLjava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 153
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-eqz v0, :cond_0

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 154
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/foundation/db/f;->b(JLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 157
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 158
    sget-object p2, Lcom/mbridge/msdk/interstitial/b/a;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 160
    :cond_0
    :goto_0
    monitor-exit p0

    return-void

    :goto_1
    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 87
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 88
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 91
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(Ljava/util/List;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 100
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 101
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 102
    invoke-virtual {p0, v0, p2}, Lcom/mbridge/msdk/interstitial/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    .locals 2

    .line 140
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/b/a;->b:Lcom/mbridge/msdk/foundation/db/f;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, p2, v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 144
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
