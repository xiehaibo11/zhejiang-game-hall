.class public final Lcom/kwad/sdk/core/b/a/cs;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/i/a$a;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/i/a$a;Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "run_sdk_version"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    :cond_1
    new-instance v0, Ljava/lang/Long;

    const-string v1, "0"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    const-string v0, "trigger_count"

    invoke-virtual {p1, v0, v3, v4}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/sdk/i/a$a;->aCR:J

    new-instance v0, Ljava/lang/Long;

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    const-string v0, "fail_count"

    invoke-virtual {p1, v0, v3, v4}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/sdk/i/a$a;->aCS:J

    new-instance v0, Ljava/lang/Long;

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v3, "real_fail_count"

    invoke-virtual {p1, v3, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/i/a$a;->aCT:J

    const-string v0, "business"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    :cond_2
    const-string v0, "stage"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    :cond_3
    const-string v0, "function"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method private static b(Lcom/kwad/sdk/i/a$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 4

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->sdkVersion:Ljava/lang/String;

    const-string v2, "run_sdk_version"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-wide v2, p0, Lcom/kwad/sdk/i/a$a;->aCR:J

    const-string v0, "trigger_count"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v2, p0, Lcom/kwad/sdk/i/a$a;->aCS:J

    const-string v0, "fail_count"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v2, p0, Lcom/kwad/sdk/i/a$a;->aCT:J

    const-string v0, "real_fail_count"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCU:Ljava/lang/String;

    const-string v2, "business"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCV:Ljava/lang/String;

    const-string v2, "stage"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object p0, p0, Lcom/kwad/sdk/i/a$a;->aCW:Ljava/lang/String;

    const-string v0, "function"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/i/a$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cs;->a(Lcom/kwad/sdk/i/a$a;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/i/a$a;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cs;->b(Lcom/kwad/sdk/i/a$a;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
