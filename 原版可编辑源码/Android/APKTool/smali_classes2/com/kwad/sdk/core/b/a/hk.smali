.class public final Lcom/kwad/sdk/core/b/a/hk;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/i/b$b;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/i/b$b;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "enable_monitor"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/i/b$b;->aCZ:I

    const-string v0, "c_sc_name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    :cond_1
    const-string v0, "c_pcl_name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    :cond_2
    const-string v0, "m_gam_name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    :cond_3
    const-string v0, "m_gsv_name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    :cond_4
    const-string v0, "m_gpv_name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    :cond_5
    return-void
.end method

.method private static b(Lcom/kwad/sdk/i/b$b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/i/b$b;->aCZ:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/i/b$b;->aCZ:I

    const-string v1, "enable_monitor"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDa:Ljava/lang/String;

    const-string v2, "c_sc_name"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDb:Ljava/lang/String;

    const-string v2, "c_pcl_name"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDc:Ljava/lang/String;

    const-string v2, "m_gam_name"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDd:Ljava/lang/String;

    const-string v2, "m_gsv_name"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object p0, p0, Lcom/kwad/sdk/i/b$b;->aDe:Ljava/lang/String;

    const-string v0, "m_gpv_name"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/i/b$b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hk;->a(Lcom/kwad/sdk/i/b$b;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/i/b$b;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hk;->b(Lcom/kwad/sdk/i/b$b;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
