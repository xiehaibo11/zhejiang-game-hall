.class public Lcom/qihoo360/replugin/model/PluginInfoList;
.super Ljava/lang/Object;
.source "PluginInfoList.java"

# interfaces
.implements Ljava/lang/Iterable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Iterable<",
        "Lcom/qihoo360/replugin/model/PluginInfo;",
        ">;"
    }
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginInfoList"


# instance fields
.field private final mMap:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfoList;->mMap:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method private addToMap(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 132
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfoList;->mMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 133
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfoList;->mMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-void
.end method

.method private getCopyValues()Ljava/util/Collection;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Collection<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 127
    new-instance v0, Ljava/util/HashSet;

    iget-object v1, p0, Lcom/qihoo360/replugin/model/PluginInfoList;->mMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method

.method private getFile(Landroid/content/Context;)Ljava/io/File;
    .locals 2

    const-string v0, "p_a"

    const/4 v1, 0x0

    .line 137
    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object p1

    .line 138
    new-instance v0, Ljava/io/File;

    const-string v1, "p.l"

    invoke-direct {v0, p1, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method


# virtual methods
.method public add(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 0

    .line 51
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfoList;->addToMap(Lcom/qihoo360/replugin/model/PluginInfo;)V

    return-void
.end method

.method public cloneList()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 63
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {p0}, Lcom/qihoo360/replugin/model/PluginInfoList;->getCopyValues()Ljava/util/Collection;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method

.method public get(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    if-eqz p1, :cond_0

    .line 59
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfoList;->mMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/model/PluginInfo;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public iterator()Ljava/util/Iterator;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Iterator<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 121
    invoke-direct {p0}, Lcom/qihoo360/replugin/model/PluginInfoList;->getCopyValues()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    return-object v0
.end method

.method public load(Landroid/content/Context;)Z
    .locals 6

    const-string v0, "PluginInfoList"

    const/4 v1, 0x0

    .line 69
    :try_start_0
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfoList;->getFile(Landroid/content/Context;)Ljava/io/File;

    move-result-object p1

    .line 70
    sget-object v2, Lcom/qihoo360/replugin/utils/Charsets;->UTF_8:Ljava/nio/charset/Charset;

    invoke-static {p1, v2}, Lcom/qihoo360/replugin/utils/FileUtils;->readFileToString(Ljava/io/File;Ljava/nio/charset/Charset;)Ljava/lang/String;

    move-result-object p1

    .line 71
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 72
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    const-string p1, "load: Read Json error!"

    .line 73
    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v1

    .line 79
    :cond_1
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    move p1, v1

    .line 80
    :goto_0
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge p1, v3, :cond_4

    .line 81
    invoke-virtual {v2, p1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    .line 82
    invoke-static {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->createByJO(Lorg/json/JSONObject;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v4

    if-nez v4, :cond_2

    .line 84
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 85
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "load: PluginInfo Invalid. Ignore! jo="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 89
    :cond_2
    invoke-direct {p0, v4}, Lcom/qihoo360/replugin/model/PluginInfoList;->addToMap(Lcom/qihoo360/replugin/model/PluginInfo;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    :goto_1
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_4
    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 97
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_5

    const-string v2, "load: Parse Json Error!"

    .line 98
    invoke-static {v0, v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_2

    :catch_1
    move-exception p1

    .line 93
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_5

    const-string v2, "load: Load error!"

    .line 94
    invoke-static {v0, v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_5
    :goto_2
    return v1
.end method

.method public remove(Ljava/lang/String;)V
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/qihoo360/replugin/model/PluginInfoList;->mMap:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public save(Landroid/content/Context;)Z
    .locals 3

    .line 106
    :try_start_0
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/model/PluginInfoList;->getFile(Landroid/content/Context;)Ljava/io/File;

    move-result-object p1

    .line 107
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 108
    invoke-direct {p0}, Lcom/qihoo360/replugin/model/PluginInfoList;->getCopyValues()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 109
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/qihoo360/replugin/utils/Charsets;->UTF_8:Ljava/nio/charset/Charset;

    invoke-static {p1, v0, v1}, Lcom/qihoo360/replugin/utils/FileUtils;->writeStringToFile(Ljava/io/File;Ljava/lang/String;Ljava/nio/charset/Charset;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 112
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 113
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :cond_1
    const/4 p1, 0x0

    return p1
.end method
