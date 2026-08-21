.class public final Lcom/kwad/sdk/core/config/item/h;
.super Lcom/kwad/sdk/core/config/item/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/config/item/h$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/config/item/b<",
        "Lcom/kwad/sdk/core/config/item/h$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/config/item/h$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/h$a;-><init>()V

    const-string v1, "idMapping"

    invoke-direct {p0, v1, v0}, Lcom/kwad/sdk/core/config/item/b;-><init>(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/SharedPreferences;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/h$a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/config/item/h$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/h$a;-><init>()V

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getKey()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-interface {p1, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/core/config/item/h;->cx(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/config/item/h$a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/h;->setValue(Ljava/lang/Object;)V

    return-void
.end method

.method public final b(Landroid/content/SharedPreferences$Editor;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getValue()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/h$a;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/h$a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/h$a;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/h$a;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/config/item/h;->cw(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getKey()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getKey()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public final g(Lorg/json/JSONObject;)V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/config/item/h$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/h$a;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/config/item/h$a;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/h;->setValue(Ljava/lang/Object;)V

    return-void
.end method

.method public final getImei()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/h$a;

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/kwad/sdk/core/config/item/h$a;->amD:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/core/config/item/h$a;->amD:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final getOaid()Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/h;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/h$a;

    if-eqz v0, :cond_0

    iget-object v1, v0, Lcom/kwad/sdk/core/config/item/h$a;->amE:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/core/config/item/h$a;->amE:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method
