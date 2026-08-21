.class public abstract Lcom/tkay/core/api/TYInitMediation;
.super Ljava/lang/Object;


# static fields
.field public static final KEY_LOCAL:Ljava/lang/String; = "tkay_local"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    const/4 v0, 0x0

    .line 114
    invoke-static {p0, p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p0

    return p0
.end method

.method public static getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "Z)Z"
        }
    .end annotation

    .line 118
    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getValueFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0
.end method

.method public static getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;)D
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")D"
        }
    .end annotation

    const-wide/16 v0, 0x0

    .line 106
    invoke-static {p0, p1, v0, v1}, Lcom/tkay/core/api/TYInitMediation;->getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;D)D

    move-result-wide p0

    return-wide p0
.end method

.method public static getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;D)D
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "D)D"
        }
    .end annotation

    .line 110
    invoke-static {p2, p3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getValueFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Double;

    invoke-virtual {p0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide p0

    return-wide p0
.end method

.method public static getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")I"
        }
    .end annotation

    const/4 v0, 0x0

    .line 90
    invoke-static {p0, p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result p0

    return p0
.end method

.method public static getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "I)I"
        }
    .end annotation

    .line 94
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getValueFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0
.end method

.method public static getLongFromMap(Ljava/util/Map;Ljava/lang/String;)J
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")J"
        }
    .end annotation

    const-wide/16 v0, 0x0

    .line 98
    invoke-static {p0, p1, v0, v1}, Lcom/tkay/core/api/TYInitMediation;->getLongFromMap(Ljava/util/Map;Ljava/lang/String;J)J

    move-result-wide p0

    return-wide p0
.end method

.method public static getLongFromMap(Ljava/util/Map;Ljava/lang/String;J)J
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "J)J"
        }
    .end annotation

    .line 102
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getValueFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Long;

    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide p0

    return-wide p0
.end method

.method public static getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    const-string v0, ""

    .line 82
    invoke-static {p0, p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getStringFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 86
    invoke-static {p0, p1, p2}, Lcom/tkay/core/api/TYInitMediation;->getValueFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0
.end method

.method private static getValueFromMap(Ljava/util/Map;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "TT;)TT;"
        }
    .end annotation

    const-string v0, "TYInitMediation"

    .line 123
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    if-eqz p0, :cond_9

    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v1

    if-gtz v1, :cond_0

    goto/16 :goto_1

    .line 126
    :cond_0
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-nez p0, :cond_1

    return-object p2

    .line 130
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    .line 132
    instance-of v1, p2, Ljava/lang/String;

    if-eqz v1, :cond_2

    goto :goto_0

    .line 134
    :cond_2
    instance-of v1, p2, Ljava/lang/Integer;

    if-eqz v1, :cond_3

    .line 135
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    goto :goto_0

    .line 136
    :cond_3
    instance-of v1, p2, Ljava/lang/Long;

    if-eqz v1, :cond_4

    .line 137
    invoke-static {p0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    goto :goto_0

    .line 138
    :cond_4
    instance-of v1, p2, Ljava/lang/Double;

    if-eqz v1, :cond_5

    .line 139
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p0

    goto :goto_0

    .line 140
    :cond_5
    instance-of v1, p2, Ljava/lang/Float;

    if-eqz v1, :cond_6

    .line 141
    invoke-static {p0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result p0

    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    goto :goto_0

    .line 142
    :cond_6
    instance-of v1, p2, Ljava/lang/Boolean;

    if-eqz v1, :cond_7

    .line 143
    invoke-static {p0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result p0

    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    goto :goto_0

    :cond_7
    move-object p0, p2

    .line 145
    :goto_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v1

    if-eqz v1, :cond_8

    .line 146
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "key = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "getValueFromMap() >>> result = "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " defaultValue = "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_8
    return-object p0

    :cond_9
    :goto_1
    return-object p2

    :catch_0
    move-exception p0

    .line 150
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p1

    if-eqz p1, :cond_a

    .line 151
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "getValueFromMap() >>> errorMsg = "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return-object p2
.end method


# virtual methods
.method protected final varargs checkToSaveInitData(Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;[",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 78
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V

    return-void
.end method

.method public getActivityStatus()Ljava/util/List;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getMetaValutStatus()Ljava/util/List;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getPermissionStatus()Ljava/util/List;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getPluginClassStatus()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public getProviderStatus()Ljava/util/List;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getResourceStatus()Ljava/util/List;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getServiceStatus()Ljava/util/List;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public abstract initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/api/MediationInitCallback;",
            ")V"
        }
    .end annotation
.end method

.method protected final runOnMainThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 74
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected final runOnThreadPool(Ljava/lang/Runnable;)V
    .locals 0

    .line 70
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    invoke-static {p1}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method public setUserDataConsent(Landroid/content/Context;ZZ)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method
