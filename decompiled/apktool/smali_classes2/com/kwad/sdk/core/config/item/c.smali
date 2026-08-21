.class public final Lcom/kwad/sdk/core/config/item/c;
.super Lcom/kwad/sdk/core/config/item/b;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/config/item/b<",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "batchReportCacheType"

    invoke-direct {p0, v1, v0}, Lcom/kwad/sdk/core/config/item/b;-><init>(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public static aR(Landroid/content/Context;)I
    .locals 4

    const-string v0, "batchReportCacheType"

    const-string v1, "loadBatchReportCacheType"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x2

    if-eqz p0, :cond_0

    const/4 v2, 0x0

    const-string v3, "ksadsdk_rep"

    invoke-virtual {p0, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-interface {p0, v0, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    return p0

    :cond_0
    return v1
.end method

.method private static h(Landroid/content/Context;I)V
    .locals 3

    const-string v0, "batchReportCacheType"

    const-string v1, "saveBatchReportCacheType"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p0, :cond_0

    const/4 v1, 0x0

    const-string v2, "ksadsdk_rep"

    invoke-virtual {p0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, v0, p1}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/SharedPreferences;)V
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/config/item/c;->aR(Landroid/content/Context;)I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/c;->setValue(Ljava/lang/Object;)V

    return-void
.end method

.method public final b(Landroid/content/SharedPreferences$Editor;)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/c;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/config/item/c;->h(Landroid/content/Context;I)V

    return-void
.end method

.method public final g(Lorg/json/JSONObject;)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/c;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/c;->zZ()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    :goto_0
    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/c;->setValue(Ljava/lang/Object;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/c;->zZ()Ljava/lang/Object;

    move-result-object p1

    goto :goto_0
.end method
