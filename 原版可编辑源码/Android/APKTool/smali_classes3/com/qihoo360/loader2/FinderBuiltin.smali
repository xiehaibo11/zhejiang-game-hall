.class public Lcom/qihoo360/loader2/FinderBuiltin;
.super Ljava/lang/Object;
.source "FinderBuiltin.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static final loadPlugins(Landroid/content/Context;Lcom/qihoo360/loader2/Builder$PxAll;)V
    .locals 3

    const-string v0, "ws001"

    const/4 v1, 0x0

    .line 52
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    const-string v2, "plugins-builtin.json"

    invoke-virtual {p0, v2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v1

    .line 54
    invoke-static {v1, p1}, Lcom/qihoo360/loader2/FinderBuiltin;->readConfig(Ljava/io/InputStream;Lcom/qihoo360/loader2/Builder$PxAll;)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 60
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 61
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0

    .line 56
    :catch_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    const-string p0, "plugins-builtin.json not found"

    .line 57
    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 64
    :cond_0
    :goto_0
    invoke-static {v1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return-void
.end method

.method private static final readConfig(Ljava/io/InputStream;Lcom/qihoo360/loader2/Builder$PxAll;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lorg/json/JSONException;
        }
    .end annotation

    .line 68
    sget-object v0, Lcom/qihoo360/replugin/utils/Charsets;->UTF_8:Ljava/nio/charset/Charset;

    invoke-static {p0, v0}, Lcom/qihoo360/replugin/utils/IOUtils;->toString(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/String;

    move-result-object p0

    .line 69
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p0, 0x0

    .line 70
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge p0, v1, :cond_5

    .line 71
    invoke-virtual {v0, p0}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    const-string v2, "name"

    .line 75
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 76
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, "ws001"

    if-eqz v2, :cond_1

    .line 77
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_4

    .line 78
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "built-in plugins config: invalid item: name is empty, json="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 82
    :cond_1
    invoke-static {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->buildFromBuiltInJson(Lorg/json/JSONObject;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v1

    .line 83
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->match()Z

    move-result v2

    if-nez v2, :cond_2

    .line 84
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_4

    .line 85
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "built-in plugins config: mismatch item: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 89
    :cond_2
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_3

    .line 90
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "built-in plugins config: item: "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 92
    :cond_3
    invoke-virtual {p1, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->addBuiltin(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_4
    :goto_1
    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    :cond_5
    return-void
.end method
