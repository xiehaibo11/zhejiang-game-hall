.class public Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;
.implements Ljava/io/Serializable;


# static fields
.field private static final serialVersionUID:J = -0xdfaba683a464407L


# instance fields
.field public biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

.field public category:Ljava/lang/String;

.field public eventId:Ljava/lang/String;

.field public extraParam:Lorg/json/JSONObject;

.field public msg:Lorg/json/JSONObject;

.field public rate:D

.field public subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

.field public suffixRatio:Ljava/lang/String;

.field public tag:Ljava/lang/String;

.field public type:Lcom/kwai/adclient/kscommerciallogger/model/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "sub_biz"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    :try_start_0
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->valueOf(Ljava/lang/String;)Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    :cond_1
    :goto_0
    const-string v0, "biz"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    :try_start_1
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->valueOf(Ljava/lang/String;)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iput-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :cond_2
    :goto_1
    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    :try_start_2
    new-instance v1, Lcom/kwai/adclient/kscommerciallogger/model/b;

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Lcom/kwai/adclient/kscommerciallogger/model/b;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->type:Lcom/kwai/adclient/kscommerciallogger/model/b;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    return-void

    :catch_2
    new-instance p1, Lcom/kwai/adclient/kscommerciallogger/model/b;

    const-string v0, "OTHER"

    invoke-direct {p1, v0}, Lcom/kwai/adclient/kscommerciallogger/model/b;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->type:Lcom/kwai/adclient/kscommerciallogger/model/b;

    :cond_3
    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->biz:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    iget-object v0, v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->value:Ljava/lang/String;

    const-string v1, "biz"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->subBiz:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    iget-object v0, v0, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->value:Ljava/lang/String;

    const-string v1, "subBiz"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->type:Lcom/kwai/adclient/kscommerciallogger/model/b;

    invoke-virtual {v0}, Lcom/kwai/adclient/kscommerciallogger/model/b;->getValue()Ljava/lang/String;

    move-result-object v0

    const-string v1, "type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
