.class public Lcom/kuaishou/weapon/p0/aw;
.super Ljava/lang/Object;


# instance fields
.field private a:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-boolean v0, Lcom/kuaishou/weapon/p0/jni/Engine;->loadSuccess:Z

    if-eqz v0, :cond_0

    :try_start_0
    invoke-static {p1}, Lcom/kuaishou/weapon/p0/jni/Engine;->getInstance(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/jni/Engine;

    move-result-object p1

    sget-object v0, Lcom/kuaishou/weapon/p0/cj;->g:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    const-string v3, ""

    invoke-virtual {p1, v0, v1, v2, v3}, Lcom/kuaishou/weapon/p0/jni/Engine;->pqr(IIILjava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kuaishou/weapon/p0/aw;->a:Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/aw;->a:Lorg/json/JSONObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    :try_start_0
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    :cond_0
    return-object v1
.end method

.method public a(I)Ljava/util/Set;
    .locals 2

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    const-string p1, "HeapTaskDa"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "queued-wor"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "JDWP"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "dTi"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "MessageHan"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "MediaPrefe"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "CleanupRef"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "GeoLocatio"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "securityai"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "Connectivi"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "PatchManag"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "CronetInte"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "AegonLogge"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "Countly"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "DownloadSt"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "GoogleApiH"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "PlatformSe"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "MemoryInfr"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "CronetLibr"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "Dex2OatIni"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "EncodeApiH"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "CookieMons"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_0
    return-object v0
.end method

.method public a(Landroid/content/Context;Ljava/lang/String;I)Ljava/util/Set;
    .locals 10

    const-string v0, " "

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/aw;->a:Lorg/json/JSONObject;

    if-eqz v1, :cond_7

    :try_start_0
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p3}, Lcom/kuaishou/weapon/p0/aw;->a(I)Ljava/util/Set;

    move-result-object v1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x3

    if-le v2, v3, :cond_7

    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    new-instance p2, Ljava/util/HashSet;

    invoke-direct {p2}, Ljava/util/HashSet;-><init>()V

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_6

    invoke-virtual {v2, v4}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v5

    const-string v6, "azeroth"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_5

    const-string v6, "OkHttp"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_5

    const-string v6, "retrofit"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_5

    move v6, v3

    :cond_0
    invoke-virtual {v5, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v8, 0x1

    const-string v9, ""

    if-eqz v7, :cond_1

    :try_start_1
    invoke-virtual {v5, v0, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    add-int/2addr v6, v8

    const/16 v7, 0xc8

    if-le v6, v7, :cond_0

    :cond_1
    const-string v6, "\n"

    invoke-virtual {v5, v6, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "\t"

    invoke-virtual {v5, v6, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "\u200b"

    invoke-virtual {v5, v6, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    const-string v6, ":"

    invoke-virtual {v5, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-virtual {v5, v8}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    :cond_2
    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v6

    const/16 v7, 0xa

    if-le v6, v7, :cond_3

    invoke-virtual {v5, v3, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    goto :goto_1

    :cond_3
    move-object v6, v5

    :goto_1
    const-string v7, "ridge"

    invoke-virtual {v5, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_4

    invoke-interface {p2, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_4
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_5

    invoke-virtual {v7, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_5

    invoke-interface {v1, v6}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_5

    invoke-virtual {p0, p3}, Lcom/kuaishou/weapon/p0/aw;->b(I)Ljava/util/Set;

    move-result-object v7

    invoke-interface {v7, v6}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_5

    invoke-interface {p2, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_5
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    :cond_6
    invoke-interface {p2}, Ljava/util/Set;->size()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-lez p1, :cond_7

    return-object p2

    :catchall_0
    :cond_7
    const/4 p1, 0x0

    return-object p1
.end method

.method public b(I)Ljava/util/Set;
    .locals 2

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    const-string p1, "AudioTrack"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "processrea"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "RemitDatab"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "BrowserBlo"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "game_push"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "Godzilla:I"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "IndexedDB"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "ScopeRetry"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "RobustPatc"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "FrescoIoBo"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const-string p1, "key_config"

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_0
    return-object v0
.end method
