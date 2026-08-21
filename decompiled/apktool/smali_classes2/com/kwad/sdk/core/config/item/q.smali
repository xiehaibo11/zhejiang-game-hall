.class public final Lcom/kwad/sdk/core/config/item/q;
.super Lcom/kwad/sdk/core/config/item/b;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/config/item/b<",
        "Ljava/util/List<",
        "Ljava/lang/String;",
        ">;>;"
    }
.end annotation


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/config/item/b;-><init>(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final Ah()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-super {p0}, Lcom/kwad/sdk/core/config/item/b;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    :cond_0
    return-object v0
.end method

.method public final a(Landroid/content/SharedPreferences;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->getKey()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/config/item/q;->cx(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/t;->fw(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ah;->J(Ljava/util/List;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/q;->setValue(Ljava/lang/Object;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->zZ()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/q;->setValue(Ljava/lang/Object;)V

    return-void
.end method

.method public final b(Landroid/content/SharedPreferences$Editor;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->Ah()Ljava/util/List;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ah;->J(Ljava/util/List;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->Ah()Ljava/util/List;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/t;->toJsonArray(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/config/item/q;->cw(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->getKey()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    :cond_0
    return-void
.end method

.method public final g(Lorg/json/JSONObject;)V
    .locals 4

    if-eqz p1, :cond_2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_2

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_0

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_2

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/q;->setValue(Ljava/lang/Object;)V

    return-void

    :cond_2
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->zZ()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/q;->setValue(Ljava/lang/Object;)V

    return-void
.end method

.method public final synthetic getValue()Ljava/lang/Object;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/q;->Ah()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method
