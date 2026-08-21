.class public Lcom/bianfeng/ymnsdk/util/YmnSourceFromExtUtils;
.super Ljava/lang/Object;
.source "YmnSourceFromExtUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getSource(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p0, "ext"    # Ljava/lang/String;

    .line 21
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result v0

    const-string v1, "YMN"

    if-eqz v0, :cond_1

    .line 23
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    .line 24
    .local v0, "mapExt":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v2, "source"

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 25
    .local v2, "source":Ljava/lang/String;
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_0

    .line 26
    return-object v1

    .line 28
    :cond_0
    return-object v2

    .line 29
    .end local v0    # "mapExt":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    .end local v2    # "source":Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 30
    .local v0, "e":Ljava/lang/Exception;
    return-object v1

    .line 33
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_1
    return-object v1
.end method
