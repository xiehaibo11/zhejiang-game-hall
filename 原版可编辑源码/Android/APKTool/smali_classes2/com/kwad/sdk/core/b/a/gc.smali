.class public final Lcom/kwad/sdk/core/b/a/gc;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/h/a/b;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/h/a/b;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "packageId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    :cond_1
    const-string v0, "zipFileName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    :cond_2
    const-string v0, "zipPath"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    :cond_3
    const-string v0, "packageUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    :cond_4
    const-string v0, "version"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    :cond_5
    const-string v0, "checksum"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    :cond_6
    const-string v0, "loadType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/h/a/b;->loadType:I

    const-string v0, "packageType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/h/a/b;->packageType:I

    const-string v0, "public"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/sdk/h/a/b;->aCf:Z

    return-void
.end method

.method private static b(Lcom/kwad/sdk/h/a/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCb:Ljava/lang/String;

    const-string v2, "packageId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    const-string v2, "zipFileName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    const-string v2, "zipPath"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    const-string v2, "packageUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->version:Ljava/lang/String;

    const-string v2, "version"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    const-string v1, "checksum"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/h/a/b;->loadType:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/h/a/b;->loadType:I

    const-string v1, "loadType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/h/a/b;->packageType:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/kwad/sdk/h/a/b;->packageType:I

    const-string v1, "packageType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    iget-boolean v0, p0, Lcom/kwad/sdk/h/a/b;->aCf:Z

    if-eqz v0, :cond_9

    iget-boolean p0, p0, Lcom/kwad/sdk/h/a/b;->aCf:Z

    const-string v0, "public"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_9
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/h/a/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gc;->a(Lcom/kwad/sdk/h/a/b;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/h/a/b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gc;->b(Lcom/kwad/sdk/h/a/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
