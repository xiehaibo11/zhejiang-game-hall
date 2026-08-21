.class public final Lcom/kwai/adclient/kscommerciallogger/model/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwai/adclient/kscommerciallogger/model/c$a;
    }
.end annotation


# instance fields
.field private final arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

.field private final biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

.field private final category:Ljava/lang/String;

.field private final eventId:Ljava/lang/String;

.field private final extraParam:Lorg/json/JSONObject;

.field private final msg:Lorg/json/JSONObject;

.field private final subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

.field private final tag:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->category:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->c(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->d(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->tag:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->e(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Lcom/kwai/adclient/kscommerciallogger/model/d;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->f(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->extraParam:Lorg/json/JSONObject;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->g(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->eventId:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->h(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c$a;->h(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)Lorg/json/JSONObject;

    move-result-object p1

    :goto_0
    iput-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->msg:Lorg/json/JSONObject;

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwai/adclient/kscommerciallogger/model/c$a;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;-><init>(Lcom/kwai/adclient/kscommerciallogger/model/c$a;)V

    return-void
.end method


# virtual methods
.method public final KZ()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->category:Ljava/lang/String;

    return-object v0
.end method

.method public final La()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    return-object v0
.end method

.method public final Lb()Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    return-object v0
.end method

.method public final Lc()Lcom/kwai/adclient/kscommerciallogger/model/d;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    return-object v0
.end method

.method public final Ld()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->msg:Lorg/json/JSONObject;

    return-object v0
.end method

.method public final Le()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->extraParam:Lorg/json/JSONObject;

    return-object v0
.end method

.method public final Lf()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->eventId:Ljava/lang/String;

    return-object v0
.end method

.method public final getTag()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->tag:Ljava/lang/String;

    return-object v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    iget-object v1, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    if-eqz v1, :cond_0

    const-string v1, "biz"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iget-object v2, v2, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->value:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    iget-object v1, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    if-eqz v1, :cond_1

    const-string v1, "sub_biz"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iget-object v2, v2, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->value:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v1, "tag"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->tag:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    if-eqz v1, :cond_2

    const-string v1, "type"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->arm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {v2}, Lcom/kwai/adclient/kscommerciallogger/model/d;->getValue()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    iget-object v1, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->msg:Lorg/json/JSONObject;

    if-eqz v1, :cond_3

    const-string v1, "msg"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->msg:Lorg/json/JSONObject;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    iget-object v1, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->extraParam:Lorg/json/JSONObject;

    if-eqz v1, :cond_4

    const-string v1, "extra_param"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->extraParam:Lorg/json/JSONObject;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    const-string v1, "event_id"

    iget-object v2, p0, Lcom/kwai/adclient/kscommerciallogger/model/c;->eventId:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
