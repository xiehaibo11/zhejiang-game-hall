.class public final Lcom/kwad/sdk/core/config/item/o;
.super Lcom/kwad/sdk/core/config/item/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/config/item/o$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/config/item/b<",
        "Lcom/kwad/sdk/core/config/item/o$a;",
        ">;"
    }
.end annotation


# instance fields
.field private amJ:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    const-string v0, "sdkPackInfo"

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/config/item/b;-><init>(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/SharedPreferences;)V
    .locals 2

    const-string v0, "sdkPackInfo"

    const/4 v1, 0x0

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/config/item/o;->cx(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/config/item/o;->amJ:Ljava/lang/String;

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    :cond_0
    new-instance p1, Lorg/json/JSONObject;

    iget-object v0, p0, Lcom/kwad/sdk/core/config/item/o;->amJ:Ljava/lang/String;

    invoke-direct {p1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/config/item/o$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/o$a;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/config/item/o$a;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/o;->setValue(Ljava/lang/Object;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public final b(Landroid/content/SharedPreferences$Editor;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/config/item/o;->amJ:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/item/o;->cw(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "sdkPackInfo"

    invoke-interface {p1, v1, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public final g(Lorg/json/JSONObject;)V
    .locals 1

    const-string v0, "sdkPackInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/config/item/o;->amJ:Ljava/lang/String;

    new-instance v0, Lcom/kwad/sdk/core/config/item/o$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/o$a;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/config/item/o$a;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/o;->setValue(Ljava/lang/Object;)V

    return-void
.end method
