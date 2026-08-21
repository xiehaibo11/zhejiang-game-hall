.class public final Lcom/kwad/components/core/t/e;
.super Ljava/lang/Object;


# direct methods
.method public static a(JZ)Ljava/lang/String;
    .locals 9

    const-string v0, " B"

    const-string v1, " KB"

    const-string v2, " MB"

    const-string v3, " GB"

    const-string v4, " TB"

    const-string v5, " PB"

    const-string v6, " EB"

    const-string v7, " ZB"

    const-string v8, " YB"

    filled-new-array/range {v0 .. v8}, [Ljava/lang/String;

    move-result-object p2

    const-wide/16 v0, 0x1

    cmp-long v0, p0, v0

    if-gtz v0, :cond_0

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p0, p1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p0, "B"

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    long-to-double v0, p0

    invoke-static {v0, v1}, Ljava/lang/Math;->log(D)D

    move-result-wide v2

    const-wide/high16 v4, 0x4090000000000000L    # 1024.0

    invoke-static {v4, v5}, Ljava/lang/Math;->log(D)D

    move-result-wide v6

    div-double/2addr v2, v6

    double-to-int v2, v2

    const-wide/16 v6, 0x400

    cmp-long p0, p0, v6

    if-lez p0, :cond_1

    int-to-double p0, v2

    invoke-static {v4, v5, p0, p1}, Ljava/lang/Math;->pow(DD)D

    move-result-wide p0

    div-double/2addr v0, p0

    goto :goto_0

    :cond_1
    div-double/2addr v0, v4

    :goto_0
    sget-object p0, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    const/4 p1, 0x2

    new-array p1, p1, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    aput-object v0, p1, v3

    const/4 v0, 0x1

    aget-object p2, p2, v2

    aput-object p2, p1, v0

    const-string p2, "%.1f%s"

    invoke-static {p0, p2, p1}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
