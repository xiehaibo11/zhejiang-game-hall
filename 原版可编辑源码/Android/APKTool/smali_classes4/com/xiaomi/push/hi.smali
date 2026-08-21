.class public Lcom/xiaomi/push/hi;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;)Z
    .locals 2

    sget-object v0, Lcom/xiaomi/push/service/ca;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {p0}, Lcom/xiaomi/push/bj;->e(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Lcom/xiaomi/push/j;->b(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 v1, 0x1

    :cond_1
    return v1
.end method

.method public static a(Landroid/content/Context;I)Z
    .locals 6

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    if-gtz p1, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {p0}, Lcom/xiaomi/push/service/u;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const/4 v1, 0x1

    move v2, v1

    :goto_0
    if-gt v2, p1, :cond_2

    const/16 v3, 0xa

    invoke-static {v3}, Lcom/xiaomi/push/g;->a(I)I

    move-result v3

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v4

    sub-int/2addr v4, v1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {p0, v4, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    const/4 v5, -0x1

    invoke-static {v4, v5}, Lcom/xiaomi/push/w;->a(Ljava/lang/String;I)I

    move-result v4

    if-ne v3, v4, :cond_1

    return v1

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return v0
.end method
