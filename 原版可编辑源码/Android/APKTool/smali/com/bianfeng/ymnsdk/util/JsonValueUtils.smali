.class public Lcom/bianfeng/ymnsdk/util/JsonValueUtils;
.super Ljava/lang/Object;
.source "JsonValueUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static doubleToString(Ljava/lang/Object;)Ljava/lang/String;
    .locals 3
    .param p0, "obj"    # Ljava/lang/Object;

    .line 9
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v1, Ljava/lang/Double;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/Double;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Double;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 10
    :catch_0
    move-exception v0

    .line 11
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 12
    const-string v1, "YMN"

    return-object v1
.end method

.method public static perProduct(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 7
    .param p0, "count"    # Ljava/lang/String;
    .param p1, "totalNum"    # Ljava/lang/String;

    .line 24
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    .line 25
    .local v0, "num":D
    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2

    const-wide/high16 v4, 0x4059000000000000L    # 100.0

    div-double/2addr v2, v4

    .line 26
    .local v2, "total":D
    div-double v4, v2, v0

    double-to-float v4, v4

    .line 27
    .local v4, "per":F
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v6, ""

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    return-object v5
.end method

.method public static price2Int(Ljava/lang/String;)I
    .locals 3
    .param p0, "s"    # Ljava/lang/String;

    .line 36
    new-instance v0, Ljava/math/BigDecimal;

    invoke-direct {v0, p0}, Ljava/math/BigDecimal;-><init>(Ljava/lang/String;)V

    .line 37
    .local v0, "price":Ljava/math/BigDecimal;
    new-instance v1, Ljava/math/BigDecimal;

    const-string v2, "100"

    invoke-direct {v1, v2}, Ljava/math/BigDecimal;-><init>(Ljava/lang/String;)V

    .line 38
    .local v1, "c":Ljava/math/BigDecimal;
    invoke-virtual {v0, v1}, Ljava/math/BigDecimal;->multiply(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;

    move-result-object v2

    invoke-virtual {v2}, Ljava/math/BigDecimal;->floatValue()F

    move-result v2

    float-to-int v2, v2

    .line 39
    .local v2, "total":I
    return v2
.end method

.method public static string2Int(Ljava/lang/String;)I
    .locals 1
    .param p0, "s"    # Ljava/lang/String;

    .line 31
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method
