.class public final Lcom/vivo/push/util/s;
.super Ljava/lang/Object;


# direct methods
.method public static a(Lcom/vivo/push/b/c;)I
    .locals 13

    invoke-static {}, Lcom/vivo/push/util/w;->b()Lcom/vivo/push/util/w;

    move-result-object v0

    invoke-virtual {p0}, Lcom/vivo/push/b/c;->b()I

    move-result v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "com.vivo.push_preferences.operate."

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, "OPERATE_COUNT"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/vivo/push/util/w;->a(Ljava/lang/String;)I

    move-result v4

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, "START_TIME"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-wide/16 v9, 0x0

    invoke-virtual {v0, v7, v9, v10}, Lcom/vivo/push/util/w;->b(Ljava/lang/String;J)J

    move-result-wide v11

    sub-long/2addr v2, v11

    const-wide/32 v11, 0x5265c00

    cmp-long v7, v2, v11

    const/4 v11, 0x1

    if-gtz v7, :cond_2

    cmp-long v2, v2, v9

    if-gez v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/vivo/push/b/c;->f()I

    move-result p0

    if-lt v4, p0, :cond_1

    const/16 p0, 0x3e9

    return p0

    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    add-int/2addr v4, v11

    invoke-virtual {v0, p0, v4}, Lcom/vivo/push/util/w;->a(Ljava/lang/String;I)V

    goto :goto_1

    :cond_2
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v0, p0, v2, v3}, Lcom/vivo/push/util/w;->a(Ljava/lang/String;J)V

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, v11}, Lcom/vivo/push/util/w;->a(Ljava/lang/String;I)V

    :goto_1
    const/4 p0, 0x0

    return p0
.end method
