.class public Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;
.super Ljava/lang/Object;
.source "ADownloadManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$a;
    }
.end annotation


# instance fields
.field private apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/mbdownload/manager/a;",
            ">;"
        }
    .end annotation
.end field

.field private listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Lcom/mbridge/msdk/out/IDownloadListener;",
            "Lcom/mbridge/msdk/mbdownload/manager/b;",
            ">;"
        }
    .end annotation
.end field

.field private listenerUniqueKeyConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Lcom/mbridge/msdk/mbdownload/manager/b;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    .line 27
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    .line 29
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerUniqueKeyConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    .line 33
    invoke-direct {p0}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->register()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$1;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;-><init>()V

    return-void
.end method

.method private addPreListener(Lcom/mbridge/msdk/mbdownload/manager/a;Ljava/lang/String;)V
    .locals 4

    .line 105
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerUniqueKeyConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->containsValue(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 106
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerUniqueKeyConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 107
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 108
    invoke-virtual {p2, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 109
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Observer;

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/mbdownload/manager/a;->addObserver(Ljava/util/Observer;)V

    .line 110
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerUniqueKeyConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v3, v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static getInstance()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;
    .locals 1

    .line 51
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$a;->a()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    move-result-object v0

    return-object v0
.end method

.method private static getTaskUniqueKey(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_0

    .line 218
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object p0

    .line 219
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 220
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, ""

    :cond_1
    :goto_0
    return-object p0
.end method

.method private register()V
    .locals 4

    .line 37
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 39
    new-instance v1, Lcom/mbridge/msdk/mbdownload/DownloadNetWorkChangeReceiver;

    invoke-direct {v1}, Lcom/mbridge/msdk/mbdownload/DownloadNetWorkChangeReceiver;-><init>()V

    .line 40
    new-instance v2, Landroid/content/IntentFilter;

    invoke-direct {v2}, Landroid/content/IntentFilter;-><init>()V

    const-string v3, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 41
    invoke-virtual {v2, v3}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 42
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    :cond_0
    return-void
.end method

.method private startNotice(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    .locals 3

    .line 164
    new-instance v0, Lcom/mbridge/msdk/mbdownload/f;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getTaskUniqueKey(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1, p2}, Lcom/mbridge/msdk/mbdownload/f;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 166
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNtbarpasbl()I

    move-result p2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne p2, v2, :cond_0

    move p2, v2

    goto :goto_0

    :cond_0
    move p2, v1

    :goto_0
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/mbdownload/f;->setCanPause(Z)V

    .line 168
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNtbarpt()I

    move-result p2

    if-nez p2, :cond_1

    move v1, v2

    :cond_1
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/f;->setOnGoingStatus(Z)V

    .line 169
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/mbdownload/f;->setTargetAppIconUrl(Ljava/lang/String;)V

    .line 170
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbdownload/f;->setTitle(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/b;

    .line 171
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/f;->start()V

    return-void
.end method


# virtual methods
.method public addDownloadListener(Ljava/lang/String;Lcom/mbridge/msdk/out/IDownloadListener;)Z
    .locals 2

    if-eqz p2, :cond_2

    .line 119
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 121
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 122
    new-instance v0, Lcom/mbridge/msdk/mbdownload/manager/b;

    invoke-direct {v0, p2}, Lcom/mbridge/msdk/mbdownload/manager/b;-><init>(Lcom/mbridge/msdk/out/IDownloadListener;)V

    .line 123
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 125
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Lcom/mbridge/msdk/mbdownload/manager/b;

    .line 127
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz p2, :cond_1

    .line 129
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->addObserver(Ljava/util/Observer;)V

    const/4 p1, 0x1

    goto :goto_1

    .line 131
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerUniqueKeyConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p2, :cond_2

    if-eqz v0, :cond_2

    .line 132
    invoke-virtual {p2, v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    const/4 p1, 0x0

    :goto_1
    return p1
.end method

.method public cancelAllTask()V
    .locals 4

    .line 264
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_1

    .line 265
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz v1, :cond_0

    .line 266
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->d()I

    move-result v2

    const/4 v3, 0x2

    if-ne v2, v3, :cond_0

    .line 267
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->b()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public deleteDownloadListener(Ljava/lang/String;Lcom/mbridge/msdk/out/IDownloadListener;)Z
    .locals 2

    if-eqz p2, :cond_2

    .line 145
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 147
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 148
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->listenerConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/mbdownload/manager/b;

    goto :goto_0

    :cond_0
    move-object p2, v1

    :goto_0
    if-eqz p2, :cond_1

    .line 151
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/mbdownload/manager/b;->a(Lcom/mbridge/msdk/out/IDownloadListener;)V

    .line 153
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz p1, :cond_2

    .line 155
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->deleteObserver(Ljava/util/Observer;)V

    const/4 p1, 0x1

    goto :goto_1

    :cond_2
    const/4 p1, 0x0

    :goto_1
    return p1
.end method

.method public getTaskProgressByUniqueKey(Ljava/lang/String;)I
    .locals 1

    .line 241
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 242
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz p1, :cond_0

    .line 244
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->e()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public getTaskStatusByUniqueKey(Ljava/lang/String;)I
    .locals 1

    .line 229
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 230
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz p1, :cond_0

    .line 232
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->d()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, -0x1

    :goto_0
    return p1
.end method

.method public initAPKDownloadTask(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Lcom/mbridge/msdk/out/IDownloadListener;)Ljava/lang/String;
    .locals 8

    .line 61
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->getTaskUniqueKey(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 62
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 63
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    .line 64
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v1

    .line 65
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/db/e;->c(Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x1

    if-eq v2, v3, :cond_6

    const/16 v4, 0xa

    if-eq v2, v4, :cond_6

    const/16 v5, 0xb

    if-ne v2, v5, :cond_0

    goto/16 :goto_2

    :cond_0
    if-nez v2, :cond_1

    .line 72
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAkdlui(Ljava/lang/String;)V

    .line 73
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 74
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/g;->b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/foundation/db/g;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J

    :cond_1
    const/4 v2, 0x0

    .line 78
    iget-object v6, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v6, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 79
    new-instance v2, Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-direct {v2, v0, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 80
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 81
    invoke-direct {p0, v2, v0}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->addPreListener(Lcom/mbridge/msdk/mbdownload/manager/a;Ljava/lang/String;)V

    goto :goto_0

    .line 83
    :cond_2
    iget-object v6, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v6, v0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mbridge/msdk/mbdownload/manager/a;

    .line 84
    invoke-virtual {v6}, Lcom/mbridge/msdk/mbdownload/manager/a;->d()I

    move-result v7

    if-eq v7, v3, :cond_5

    if-eq v7, v4, :cond_5

    if-ne v7, v5, :cond_3

    goto :goto_1

    :cond_3
    :goto_0
    if-eqz v2, :cond_4

    .line 93
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/manager/a;->d()I

    move-result v1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_4

    .line 94
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->startNotice(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 97
    :cond_4
    invoke-virtual {p0, v0, p3}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->addDownloadListener(Ljava/lang/String;Lcom/mbridge/msdk/out/IDownloadListener;)Z

    goto :goto_3

    .line 86
    :cond_5
    :goto_1
    invoke-virtual {v6}, Lcom/mbridge/msdk/mbdownload/manager/a;->f()Ljava/lang/String;

    move-result-object p1

    .line 87
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v2

    invoke-static {p3, v2, p2, v0}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    invoke-virtual {v1, v0, p1}, Lcom/mbridge/msdk/foundation/db/e;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 67
    :cond_6
    :goto_2
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/db/e;->i(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 68
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    invoke-static {p3, p1, p2, v0}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_3
    return-object v0
.end method

.method public installApkByUniqueKey(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 251
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 252
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz v0, :cond_0

    .line 254
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->f()Ljava/lang/String;

    move-result-object v0

    .line 255
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 256
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    invoke-static {v1, v0, p2, p1}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public installed(Ljava/lang/String;)V
    .locals 2

    .line 190
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 192
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 193
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/mbdownload/manager/a;

    :cond_0
    if-eqz v0, :cond_1

    .line 196
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->c()V

    :cond_1
    return-void
.end method

.method public pause(Ljava/lang/String;)V
    .locals 2

    .line 203
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 205
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 206
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/mbdownload/manager/a;

    :cond_0
    if-eqz v0, :cond_1

    .line 209
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b()V

    :cond_1
    return-void
.end method

.method public reStartAllTask()V
    .locals 4

    .line 274
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_2

    .line 275
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/mbdownload/manager/a;

    if-eqz v1, :cond_0

    .line 277
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->d()I

    move-result v2

    const/4 v3, 0x5

    if-eq v2, v3, :cond_1

    const/4 v3, 0x6

    if-eq v2, v3, :cond_1

    const/4 v3, -0x1

    if-eq v2, v3, :cond_1

    const/16 v3, 0x8

    if-eq v2, v3, :cond_1

    const/4 v3, 0x2

    if-ne v2, v3, :cond_0

    .line 279
    :cond_1
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->a()V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public start(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 175
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 177
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 178
    new-instance v0, Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-direct {v0, p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 181
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;->apkConcurrentHashMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/mbdownload/manager/a;

    :goto_0
    if-eqz v0, :cond_1

    .line 184
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->a()V

    :cond_1
    return-void
.end method
