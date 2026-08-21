.class public final Lcom/tkay/basead/b;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/basead/d/b;)Ljava/util/Map;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/basead/d/b;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    if-eqz p0, :cond_0

    .line 25
    invoke-virtual {p0}, Lcom/tkay/basead/d/b;->e()Lcom/tkay/core/common/f/h;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/basead/b;->a(Lcom/tkay/core/common/f/h;)Ljava/util/Map;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lcom/tkay/basead/f/c;)Ljava/util/Map;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/basead/f/c;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    if-eqz p0, :cond_0

    .line 32
    invoke-virtual {p0}, Lcom/tkay/basead/f/c;->e()Lcom/tkay/core/common/f/r;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/basead/b;->a(Lcom/tkay/core/common/f/h;)Ljava/util/Map;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lcom/tkay/core/common/f/h;)Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/common/f/h;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    if-eqz p0, :cond_2

    .line 39
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 40
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v1

    const-string v2, "offer_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 41
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->q()Ljava/lang/String;

    move-result-object v1

    const-string v2, "creative_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 42
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    :goto_0
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "is_deeplink"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 44
    instance-of v1, p0, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_1

    .line 45
    check-cast p0, Lcom/tkay/core/common/f/z;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->T()Ljava/lang/String;

    move-result-object p0

    const-string v1, "dsp_id"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-object v0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method
