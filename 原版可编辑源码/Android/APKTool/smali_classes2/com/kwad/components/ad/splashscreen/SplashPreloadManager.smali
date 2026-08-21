.class public final Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;,
        Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$a;
    }
.end annotation


# instance fields
.field private BZ:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;",
            ">;"
        }
    .end annotation
.end field

.field private Ca:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private volatile Cb:Landroid/content/SharedPreferences;

.field private final mLock:Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->mLock:Ljava/lang/Object;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->init()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;-><init>()V

    return-void
.end method

.method private static W(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "check preloadId "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " file exists "

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v1, :cond_0

    const-string p0, "null"

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    :goto_0
    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v2, "PreloadManager"

    invoke-static {v2, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v0
.end method

.method public static X(Ljava/lang/String;)Ljava/io/File;
    .locals 2

    if-eqz p0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getVideoFile preloadId "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  url "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PreloadManager"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static d(Lcom/kwad/components/core/response/model/AdResultData;)Z
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    return p0

    :cond_0
    return v1
.end method

.method private init()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    const-string v2, "ksadsdk_splash_preload_id_list"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->initData()V

    :cond_0
    return-void
.end method

.method private initData()V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    new-instance v4, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    invoke-direct {v4}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;-><init>()V

    :try_start_0
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    instance-of v6, v5, Ljava/lang/String;

    if-eqz v6, :cond_0

    check-cast v5, Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_0

    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v6}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->parseJson(Lorg/json/JSONObject;)V

    iget-object v5, v4, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v5

    iget-object v6, v4, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    invoke-virtual {v5, v6}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v5

    if-eqz v5, :cond_2

    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v5

    if-eqz v5, :cond_2

    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->mLock:Ljava/lang/Object;

    monitor-enter v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    iget-object v6, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    invoke-virtual {v6, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    monitor-exit v5

    goto :goto_0

    :catchall_0
    move-exception v3

    monitor-exit v5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v3

    :cond_2
    iget-object v3, v4, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v3, "PreloadManager"

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "Remove null file list "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    invoke-static {v3}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v0, v2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_4
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method private kA()V
    .locals 10

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->mLock:Ljava/lang/Object;

    monitor-enter v2

    :try_start_0
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    invoke-virtual {v4}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_0
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    iget-object v6, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    invoke-virtual {v6, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    if-eqz v6, :cond_0

    iget-wide v6, v6, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    cmp-long v6, v6, v0

    if-gez v6, :cond_0

    invoke-interface {v3, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    invoke-virtual {v4, v3}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    invoke-interface {v0, v3}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/kwad/sdk/core/diskcache/b/a;->remove(Ljava/lang/String;)Z

    goto :goto_1

    :cond_2
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/16 v1, 0x1e

    if-le v0, v1, :cond_7

    const-string v1, "PreloadManager"

    const-string v2, "\u5927\u4e8e 30 \u6309\u5931\u6548\u65e5\u671f\u8fdc\u8fd1\u987a\u5e8f\u79fb\u9664"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    add-int/lit8 v0, v0, -0xf

    const/4 v1, 0x0

    :goto_2
    if-ge v1, v0, :cond_7

    const-wide v2, 0x7fffffffffffffffL

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->mLock:Ljava/lang/Object;

    monitor-enter v4

    :try_start_1
    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    invoke-virtual {v5}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v5

    invoke-interface {v5}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v6, ""

    :cond_3
    :goto_3
    :try_start_2
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_4

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    iget-wide v8, v7, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    cmp-long v8, v8, v2

    if-gez v8, :cond_3

    iget-wide v2, v7, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    iget-object v6, v7, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    goto :goto_3

    :cond_4
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v5, v6}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    invoke-virtual {v5, v6}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v5, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    invoke-interface {v5}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    invoke-interface {v5, v6}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    invoke-interface {v5}, Landroid/content/SharedPreferences$Editor;->apply()V

    const-string v5, "PreloadManager"

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "\u79fb\u9664 preloadId = "

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " expiredTime =  "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    monitor-exit v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v2

    invoke-virtual {v2, v6}, Lcom/kwad/sdk/core/diskcache/b/a;->remove(Ljava/lang/String;)Z

    :cond_6
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :catchall_0
    move-exception v0

    :try_start_3
    monitor-exit v4
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw v0

    :cond_7
    return-void

    :catchall_1
    move-exception v0

    :try_start_4
    monitor-exit v2
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    throw v0
.end method

.method public static kB()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;
    .locals 2

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$a;->kC()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    if-nez v1, :cond_0

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->init()V

    :cond_0
    return-object v0
.end method

.method private n(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 7

    new-instance v0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->cacheTime:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-object v3, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->validityPeriod:I

    int-to-long v3, v3

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    add-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->expiredTime:J

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->preloadId:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->mLock:Ljava/lang/Object;

    monitor-enter v1

    :try_start_0
    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->BZ:Ljava/util/HashMap;

    iget-object v3, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    invoke-virtual {v2, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    iget-object v3, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    iget-object v3, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    invoke-interface {v1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager$PreLoadItem;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, p1, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method


# virtual methods
.method public final R()Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->mLock:Ljava/lang/Object;

    monitor-enter v1

    :try_start_0
    const-string v2, "PreloadManager"

    const-string v3, "getPreloadIdList start "

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x0

    :goto_0
    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_1

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v4

    if-eqz v4, :cond_0

    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const-string v2, "PreloadManager"

    const-string v3, "getPreloadIdList end "

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getPreloadIdList "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Ca:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "PreloadManager"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method public final b(Lcom/kwad/components/core/response/model/AdResultData;Z)I
    .locals 15

    move-object v0, p0

    invoke-virtual/range {p1 .. p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-static/range {p1 .. p1}, Lcom/kwad/components/ad/splashscreen/monitor/a;->e(Lcom/kwad/components/core/response/model/AdResultData;)V

    const/4 v2, 0x0

    move v3, v2

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    const/4 v5, 0x0

    if-eqz v4, :cond_a

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v4, :cond_0

    iget-object v6, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v8, v7, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    if-eqz v8, :cond_9

    iget-object v8, v0, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->Cb:Landroid/content/SharedPreferences;

    if-eqz v8, :cond_9

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v8

    iget-object v10, v7, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object v10, v10, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    invoke-static {v10}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->W(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_8

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v10

    if-eqz v10, :cond_1

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v10

    goto :goto_1

    :cond_1
    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v10

    if-eqz v10, :cond_2

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v10

    iget-object v10, v10, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    goto :goto_1

    :cond_2
    move-object v10, v5

    :goto_1
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_7

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v11

    iget-object v12, v7, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget v12, v12, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadType:I

    const/4 v13, 0x1

    if-ne v12, v13, :cond_4

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v12

    invoke-virtual {v12}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v12

    invoke-static {v12}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v12

    if-nez v12, :cond_4

    if-eqz p2, :cond_3

    goto :goto_2

    :cond_3
    move v12, v2

    goto :goto_3

    :cond_4
    :goto_2
    move v12, v13

    :goto_3
    if-eqz v12, :cond_6

    new-instance v12, Ljava/lang/StringBuilder;

    const-string v14, "start Download preloadId "

    invoke-direct {v12, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, " true url "

    invoke-virtual {v12, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    const-string v14, "PreloadManager"

    invoke-static {v14, v12}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->kA()V

    new-instance v12, Lcom/kwad/sdk/core/network/a/a$a;

    invoke-direct {v12}, Lcom/kwad/sdk/core/network/a/a$a;-><init>()V

    invoke-static {v10, v11, v12}, Lcom/kwad/components/core/video/j;->a(Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/network/a/a$a;)Z

    move-result v10

    if-eqz v10, :cond_5

    invoke-direct {p0, v7}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->n(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    add-int/lit8 v3, v3, 0x1

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v10

    sub-long v9, v10, v8

    const/4 v11, 0x1

    iget-wide v12, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    move-object v8, v7

    invoke-static/range {v8 .. v13}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdInfo;JIJ)V

    goto/16 :goto_0

    :cond_5
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    const/4 v8, 0x4

    iget-object v9, v12, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    iget-wide v10, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-static {v7, v8, v9, v10, v11}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdInfo;ILjava/lang/String;J)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v7

    iget-object v8, v12, Lcom/kwad/sdk/core/network/a/a$a;->msg:Ljava/lang/String;

    invoke-virtual {v7, v4, v13, v8}, Lcom/kwad/components/core/o/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V

    goto/16 :goto_0

    :cond_6
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-wide v8, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    const-string v10, "networkError"

    invoke-static {v7, v13, v10, v8, v9}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdInfo;ILjava/lang/String;J)V

    goto/16 :goto_0

    :cond_7
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    const/4 v8, 0x2

    iget-wide v9, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    const-string v11, "urlError"

    :goto_4
    invoke-static {v7, v8, v11, v9, v10}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdInfo;ILjava/lang/String;J)V

    goto/16 :goto_0

    :cond_8
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v10

    sub-long v9, v10, v8

    const/4 v11, 0x2

    iget-wide v12, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    move-object v8, v7

    invoke-static/range {v8 .. v13}, Lcom/kwad/components/ad/splashscreen/monitor/a;->a(Lcom/kwad/sdk/core/response/model/AdInfo;JIJ)V

    invoke-direct {p0, v7}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->n(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_9
    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    const/4 v8, 0x3

    iget-wide v9, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    const-string v11, "preloadIdError"

    goto :goto_4

    :cond_a
    invoke-virtual/range {p1 .. p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_b

    invoke-virtual/range {p1 .. p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Lcom/kwad/sdk/core/response/model/AdTemplate;

    :cond_b
    const-string v1, "splashAd_"

    if-lez v3, :cond_c

    const-string v2, "onSplashVideoAdCacheSuccess"

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/i;->am(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v1

    invoke-virtual {v1, v5, v3}, Lcom/kwad/components/core/o/a;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    goto :goto_5

    :cond_c
    const-string v2, "onSplashVideoAdCacheFailed"

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/i;->am(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    return v3
.end method

.method public final c(Lcom/kwad/components/core/response/model/AdResultData;)Z
    .locals 2

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->W(Ljava/lang/String;)Z

    move-result p1

    return p1

    :cond_0
    return v1
.end method
