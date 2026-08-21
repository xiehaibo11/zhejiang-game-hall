.class public Lcom/qihoo360/replugin/component/utils/IntentMatcherHelper;
.super Ljava/lang/Object;
.source "IntentMatcherHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static doMatchIntent(Landroid/content/Context;Landroid/content/Intent;Ljava/util/Map;)Ljava/lang/String;
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Landroid/content/Intent;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-nez p2, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 77
    :cond_0
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v7

    .line 78
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/content/Intent;->resolveTypeIfNeeded(Landroid/content/ContentResolver;)Ljava/lang/String;

    move-result-object p0

    .line 79
    invoke-virtual {p1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v8

    .line 80
    invoke-virtual {p1}, Landroid/content/Intent;->getScheme()Ljava/lang/String;

    move-result-object v9

    .line 81
    invoke-virtual {p1}, Landroid/content/Intent;->getCategories()Ljava/util/Set;

    move-result-object p1

    .line 83
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_1
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_a

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    move-object v10, v0

    check-cast v10, Ljava/util/Map$Entry;

    .line 84
    invoke-interface {v10}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    move-object v11, v0

    check-cast v11, Ljava/lang/String;

    .line 85
    invoke-interface {v10}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-nez v0, :cond_2

    goto :goto_0

    .line 90
    :cond_2
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v12

    :cond_3
    :goto_1
    invoke-interface {v12}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {v12}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/IntentFilter;

    const-string v6, "ComponentList"

    move-object v1, v7

    move-object v2, p0

    move-object v3, v9

    move-object v4, v8

    move-object v5, p1

    .line 91
    invoke-virtual/range {v0 .. v6}, Landroid/content/IntentFilter;->match(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/util/Set;Ljava/lang/String;)I

    move-result v0

    const-string v1, "ms-parser"

    if-ltz v0, :cond_5

    .line 93
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_4

    .line 94
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "IntentFilter \u5339\u914d\u6210\u529f: "

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v10}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return-object v11

    .line 98
    :cond_5
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_3

    const/4 v2, -0x4

    if-eq v0, v2, :cond_9

    const/4 v2, -0x3

    if-eq v0, v2, :cond_8

    const/4 v2, -0x2

    if-eq v0, v2, :cond_7

    const/4 v2, -0x1

    if-eq v0, v2, :cond_6

    const-string v0, "unknown reason"

    goto :goto_2

    :cond_6
    const-string v0, "type"

    goto :goto_2

    :cond_7
    const-string v0, "data"

    goto :goto_2

    :cond_8
    const-string v0, "action"

    goto :goto_2

    :cond_9
    const-string v0, "category"

    .line 117
    :goto_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "  Filter did not match: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :cond_a
    const-string p0, ""

    return-object p0
.end method

.method public static getActivityInfo(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/pm/ActivityInfo;
    .locals 1

    if-nez p1, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 60
    :cond_0
    sget-object v0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-virtual {v0, p1}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->getActivityFilterMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    invoke-static {p0, p2, v0}, Lcom/qihoo360/replugin/component/utils/IntentMatcherHelper;->doMatchIntent(Landroid/content/Context;Landroid/content/Intent;Ljava/util/Map;)Ljava/lang/String;

    move-result-object p0

    .line 61
    invoke-static {p1, p0}, Lcom/qihoo360/i/Factory;->queryActivityInfo(Ljava/lang/String;Ljava/lang/String;)Landroid/content/pm/ActivityInfo;

    move-result-object p0

    return-object p0
.end method
