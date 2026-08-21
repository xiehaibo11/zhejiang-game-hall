.class public final Lcom/kwad/sdk/core/config/item/n;
.super Lcom/kwad/sdk/core/config/item/b;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/config/item/b<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile amI:[Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/config/item/b;-><init>(Ljava/lang/String;Ljava/lang/Object;)V

    const/4 p1, 0x0

    sput-object p1, Lcom/kwad/sdk/core/config/item/n;->amI:[Ljava/lang/String;

    return-void
.end method

.method public static Q(J)Z
    .locals 6

    sget-object v0, Lcom/kwad/sdk/core/config/item/n;->amI:[Ljava/lang/String;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/config/item/n;->amI:[Ljava/lang/String;

    array-length v2, v0

    move v3, v1

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v0, v3

    if-eqz v4, :cond_1

    invoke-static {p0, p1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return v1
.end method

.method private static cy(Ljava/lang/String;)V
    .locals 1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, ","

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/kwad/sdk/core/config/item/n;->amI:[Ljava/lang/String;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/SharedPreferences;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->zZ()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/n;->setValue(Ljava/lang/Object;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/config/item/n;->cy(Ljava/lang/String;)V

    return-void
.end method

.method public final b(Landroid/content/SharedPreferences$Editor;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {p1, v0, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public final g(Lorg/json/JSONObject;)V
    .locals 2

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->getKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->zZ()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/n;->setValue(Ljava/lang/Object;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/config/item/n;->cy(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/n;->zZ()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/config/item/n;->setValue(Ljava/lang/Object;)V

    return-void
.end method
