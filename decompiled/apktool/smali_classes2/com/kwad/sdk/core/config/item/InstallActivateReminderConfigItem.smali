.class public final Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;
.super Lcom/kwad/sdk/core/config/item/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/config/item/b<",
        "Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;-><init>()V

    const-string v1, "installActivateReminderConfig"

    invoke-direct {p0, v1, v0}, Lcom/kwad/sdk/core/config/item/b;-><init>(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/SharedPreferences;)V
    .locals 5

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;-><init>()V

    :cond_0
    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getKey()Ljava/lang/String;

    move-result-object v3

    const-string v4, ""

    invoke-interface {p1, v3, v4}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v2

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    if-eqz v1, :cond_1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;->parseJson(Lorg/json/JSONObject;)V

    :cond_1
    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->setValue(Ljava/lang/Object;)V

    return-void
.end method

.method public final b(Landroid/content/SharedPreferences$Editor;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getValue()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getKey()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    goto :goto_0
.end method

.method public final g(Lorg/json/JSONObject;)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;

    invoke-direct {v0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem$InstallActivateReminderConfig;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->setValue(Ljava/lang/Object;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->zZ()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/InstallActivateReminderConfigItem;->setValue(Ljava/lang/Object;)V

    return-void
.end method
