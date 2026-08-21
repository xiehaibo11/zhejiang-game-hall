.class public Lcom/bianfeng/ymnsdk/YmnStrategy;
.super Ljava/lang/Object;
.source "YmnStrategy.java"


# static fields
.field public static final STRATEGY_INNER_PROGRESS:I = 0x1

.field public static final STRATEGY_INNER_TOAST_WARN:I = 0x2

.field public static final STRATEGY_NONE:I

.field private static flags:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 16
    const/4 v0, 0x3

    sput v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addStrategy(I)V
    .locals 2
    .param p0, "strategy"    # I

    .line 23
    sget v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    or-int/2addr v0, p0

    sput v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    .line 24
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "add addStrategy "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 25
    return-void
.end method

.method protected static varargs arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;
    .locals 2
    .param p0, "args"    # [Ljava/lang/String;
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

    .line 38
    const/4 v0, 0x0

    :try_start_0
    aget-object v0, p0, v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getLinkedHashMapFromStr(Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 39
    :catch_0
    move-exception v0

    .line 40
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 41
    new-instance v1, Ljava/util/LinkedHashMap;

    invoke-direct {v1}, Ljava/util/LinkedHashMap;-><init>()V

    return-object v1
.end method

.method protected static varargs isJsonParamers([Ljava/lang/String;)Z
    .locals 3
    .param p0, "args"    # [Ljava/lang/String;

    .line 46
    const/4 v0, 0x0

    if-eqz p0, :cond_1

    array-length v1, p0

    const/4 v2, 0x1

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 49
    :cond_0
    aget-object v0, p0, v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result v0

    return v0

    .line 47
    :cond_1
    :goto_0
    return v0
.end method

.method public static setStrategys(I)V
    .locals 0
    .param p0, "strategys"    # I

    .line 19
    sput p0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    .line 20
    return-void
.end method

.method public static withStrategy(I)Z
    .locals 1
    .param p0, "strategy"    # I

    .line 28
    sget v0, Lcom/bianfeng/ymnsdk/YmnStrategy;->flags:I

    and-int/2addr v0, p0

    if-ne v0, p0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
