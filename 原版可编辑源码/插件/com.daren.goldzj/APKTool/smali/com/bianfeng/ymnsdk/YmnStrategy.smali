.class public Lcom/bianfeng/ymnsdk/YmnStrategy;
.super Ljava/lang/Object;
.source "YmnStrategy.java"


# static fields
.field public static final STRATEGY_INNER_PROGRESS:I = 0x1

.field public static final STRATEGY_INNER_TOAST_WARN:I = 0x2

.field public static final STRATEGY_NONE:I = 0x0

.field private static flags:I = 0x3


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addStrategy(I)V
    .locals 2

    .line 1
    sget v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    or-int/2addr v0, p0

    sput v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "add addStrategy "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    return-void
.end method

.method protected static varargs arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 1
    :try_start_0
    aget-object p0, p0, v0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getLinkedHashMapFromStr(Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 4
    new-instance p0, Ljava/util/LinkedHashMap;

    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    return-object p0
.end method

.method protected static varargs isJsonParamers([Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 1
    array-length v1, p0

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    aget-object p0, p0, v0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result p0

    return p0

    :cond_1
    :goto_0
    return v0
.end method

.method public static setStrategys(I)V
    .locals 0

    .line 1
    sput p0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    return-void
.end method

.method public static withStrategy(I)Z
    .locals 1

    .line 1
    sget v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    and-int/2addr v0, p0

    if-ne v0, p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method
