.class public final Lcom/tkay/core/common/l/t;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/aj;)Z
    .locals 2

    .line 28
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    const/16 v1, 0xf

    if-ne v0, v1, :cond_0

    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 38
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v1

    invoke-virtual {v1, p0, p1}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object p0

    const/4 v1, 0x1

    if-eqz p0, :cond_1

    return v1

    .line 43
    :cond_1
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 44
    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->a()Z

    move-result p0

    if-nez p0, :cond_2

    return v1

    :cond_2
    return v0
.end method

.method public static a(Ljava/util/List;)Z
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 15
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    move v2, v0

    :goto_0
    if-ge v2, v1, :cond_1

    .line 18
    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    if-eqz v3, :cond_0

    .line 19
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return v0
.end method
