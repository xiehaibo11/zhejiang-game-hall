.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;
.super Ljava/lang/Object;
.source "LoginSignUtils.java"


# static fields
.field public static intData:Ljava/lang/String; = "app_id,event,identify_id,platform_id,rst_code,rst_cost,app_memory,app_use_memory,cli_available_ram_memory,sub_rst_code,cli_available_rom_memory,cli_total_rom_memory,cli_total_ram_memory"

.field public static longData:Ljava/lang/String; = "event_sequence"

.field public static privateKey:Ljava/lang/String; = "0a1b70067129eb9835b27b79d026b95c"


# direct methods
.method public static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static sign(Ljava/lang/Object;)Ljava/lang/String;
    .locals 8

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;->toTreeMap(Ljava/lang/Object;)Ljava/util/TreeMap;

    move-result-object p0

    .line 2
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    .line 3
    invoke-virtual {p0}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 4
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 5
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 6
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    goto :goto_0

    .line 9
    :cond_0
    sget-object v4, Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;->intData:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    const-string v5, ""

    if-eqz v4, :cond_1

    .line 10
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v2}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v6

    double-to-int v2, v6

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 12
    :cond_1
    sget-object v4, Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;->longData:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 13
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v2}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v6

    double-to-long v6, v6

    invoke-virtual {v3, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 15
    :cond_2
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    .line 18
    :cond_3
    sget-object p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/LoginSignUtils;->privateKey:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 20
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static sign(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 21
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static toTreeMap(Ljava/lang/Object;)Ljava/util/TreeMap;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-class v1, Ljava/util/TreeMap;

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/TreeMap;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "toTreeMap:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 4
    new-instance p0, Ljava/util/TreeMap;

    invoke-direct {p0}, Ljava/util/TreeMap;-><init>()V

    return-object p0
.end method
