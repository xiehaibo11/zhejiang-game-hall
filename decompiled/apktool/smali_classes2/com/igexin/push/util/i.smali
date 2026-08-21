.class public Lcom/igexin/push/util/i;
.super Ljava/lang/Object;


# direct methods
.method public static a(Ljava/lang/Class;Ljava/lang/Class;I)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_3

    if-eqz p1, :cond_3

    if-gtz p2, :cond_0

    goto :goto_0

    :cond_0
    if-eq p0, p1, :cond_2

    invoke-virtual {p0}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object p0

    add-int/lit8 p2, p2, -0x1

    invoke-static {p0, p1, p2}, Lcom/igexin/push/util/i;->a(Ljava/lang/Class;Ljava/lang/Class;I)Z

    move-result p0

    return p0

    :cond_1
    return v0

    :cond_2
    const/4 p0, 0x1

    return p0

    :cond_3
    :goto_0
    return v0
.end method
