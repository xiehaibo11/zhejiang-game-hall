.class public final Lcom/mbridge/msdk/widget/custom/b/e;
.super Ljava/lang/Object;
.source "XmlUtils.java"


# direct methods
.method public static a(Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 65
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    .line 70
    :try_start_0
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    .line 74
    :catch_0
    :try_start_1
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_1

    return v1

    .line 78
    :catch_1
    :try_start_2
    invoke-static {p0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F
    :try_end_2
    .catch Ljava/lang/NumberFormatException; {:try_start_2 .. :try_end_2} :catch_2

    return v1

    :catch_2
    :cond_1
    :goto_0
    return v0
.end method
