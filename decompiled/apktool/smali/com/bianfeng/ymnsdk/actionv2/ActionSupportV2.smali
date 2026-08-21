.class public abstract Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
.super Ljava/util/Observable;
.source "ActionSupportV2.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/Observable;",
        "Lcom/bianfeng/ymnsdk/action/HttpListener;"
    }
.end annotation


# static fields
.field protected static final TAG:Ljava/lang/String; = "ActionSupportV2"


# instance fields
.field protected attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

.field protected context:Landroid/content/Context;

.field protected gContent:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field protected httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

.field protected pContent:Ljava/lang/String;

.field private payloadEntity:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

.field private trace:Ljava/lang/String;

.field private url:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 146
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 147
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    .line 148
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    .line 149
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->setMethod(I)V

    .line 150
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->gContent:Ljava/util/TreeMap;

    .line 151
    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 0
    .param p0, "x0"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
    .param p1, "x1"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 30
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->notifyResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    return-void
.end method

.method private notifyResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 1
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 285
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    invoke-virtual {p0}, Ljava/util/Observable;->setChanged()V

    .line 286
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->isResponsed()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 288
    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 289
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->access$102(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 293
    :cond_0
    goto :goto_0

    .line 291
    :catch_0
    move-exception v0

    .line 292
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 294
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->i(Landroid/content/Context;)V

    .line 295
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->notifyRequestSuccess()V

    goto :goto_1

    .line 297
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->h(Landroid/content/Context;)V

    .line 298
    invoke-static {}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->notifyRequestFailure()V

    .line 303
    :goto_1
    invoke-virtual {p0, p1}, Ljava/util/Observable;->notifyObservers(Ljava/lang/Object;)V

    .line 304
    return-void
.end method

.method private parseResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 6
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 247
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    :try_start_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->showDebugLog(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    .line 248
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v0

    .line 249
    .local v0, "resdata":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 250
    const-string v1, "ActionSupportV2"

    const-string v3, "do action response error code = %d msg = %s"

    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getCode()I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v2

    const/4 v2, 0x1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getMsg()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v2

    invoke-static {v3, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 251
    :cond_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 252
    new-instance v1, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 253
    .local v1, "obj":Lorg/json/JSONObject;
    const-string v3, "trade_request_type"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 254
    .local v3, "type":Ljava/lang/String;
    const-string v4, "ERROR"

    invoke-virtual {v4, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 255
    const/16 v2, 0x25b

    invoke-virtual {p1, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setCode(I)V

    .line 256
    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setData(Lorg/json/JSONObject;)V

    goto :goto_0

    .line 258
    :cond_1
    invoke-virtual {p1, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setCode(I)V

    .line 259
    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setData(Lorg/json/JSONObject;)V

    goto :goto_0

    .line 261
    .end local v1    # "obj":Lorg/json/JSONObject;
    .end local v3    # "type":Ljava/lang/String;
    :cond_2
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonArrayObject(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 262
    invoke-virtual {p1, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setCode(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 261
    :cond_3
    :goto_0
    nop

    .line 268
    .end local v0    # "resdata":Ljava/lang/String;
    :goto_1
    goto :goto_2

    .line 264
    :catch_0
    move-exception v0

    .line 265
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 266
    const/16 v1, 0x25a

    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setCode(I)V

    .line 267
    const-string v1, "parse response json error"

    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->setMsg(Ljava/lang/String;)V

    .line 269
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_2
    return-void
.end method

.method private showDebugLog(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 4
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 272
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 273
    .local v0, "builder":Ljava/lang/StringBuilder;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[CONTEXT] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 274
    const-string v1, "\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 275
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[REQUEST] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->url:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 276
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 277
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[CONTENT] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->pContent:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 278
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 279
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[RESPONSE] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 280
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->dRich(Ljava/lang/String;)I

    .line 281
    return-void
.end method


# virtual methods
.method public actionStart()V
    .locals 1

    .line 163
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    :try_start_0
    const-string v0, "ActionSupportV2 actionStart "

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 164
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->getURL()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->url:Ljava/lang/String;

    .line 165
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->url:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->doRequest(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 168
    goto :goto_0

    .line 166
    :catch_0
    move-exception v0

    .line 167
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 169
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public doRequest(Ljava/lang/String;)V
    .locals 7
    .param p1, "url"    # Ljava/lang/String;

    .line 208
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 209
    .local v0, "sb":Ljava/lang/StringBuilder;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->gContent:Ljava/util/TreeMap;

    invoke-virtual {v1}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 210
    .local v2, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "&"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 211
    .end local v2    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    goto :goto_0

    .line 212
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_1

    .line 213
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "?"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 216
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->pContent:Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->payloadEntity:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->trace:Ljava/lang/String;

    move-object v2, p1

    move-object v6, p0

    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V

    .line 220
    return-void
.end method

.method protected formatUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "action"    # Ljava/lang/String;

    .line 315
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    const-string v0, "trade"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->getHost(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 316
    .local v0, "urlHost":Ljava/lang/String;
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v2, 0x1

    aput-object p1, v1, v2

    const-string v2, "%s/%s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method protected abstract getURL()Ljava/lang/String;
.end method

.method public onComplete(Ljava/lang/String;)V
    .locals 1
    .param p1, "response"    # Ljava/lang/String;

    .line 224
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;-><init>(Ljava/lang/String;)V

    .line 225
    .local v0, "result":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    .line 226
    return-void
.end method

.method public onEndAttachment()V
    .locals 2

    .line 53
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 54
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment;->onEnd(Landroid/content/Context;)V

    .line 55
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 57
    :cond_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 230
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    invoke-direct {v0, p1, p2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;-><init>(ILjava/lang/String;)V

    .line 231
    .local v0, "result":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    .line 232
    return-void
.end method

.method public varargs abstract onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public onStartAttachment()V
    .locals 2

    .line 47
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    if-eqz v0, :cond_0

    .line 48
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment;->onStart(Landroid/content/Context;)V

    .line 50
    :cond_0
    return-void
.end method

.method protected abstract onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 2
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    .line 235
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->parseResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    .line 236
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->context:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;-><init>(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 242
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->notifyResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    .line 243
    :goto_0
    return-void
.end method

.method protected putBasicData(Lorg/json/JSONObject;)V
    .locals 4
    .param p1, "json"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 178
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    .line 179
    .local v0, "dataFunUtils":Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 180
    .local v1, "base":Lorg/json/JSONObject;
    const-string v2, "client_ip"

    const-string v3, ""

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 181
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_id"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 182
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceModel()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_mobile"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 183
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getNetChannelStr()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_network"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 184
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceOS()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_os"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 185
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getOsVersion()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_os_version"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 186
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDevicePixel()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_pixel"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 187
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getDeviceType()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_type"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 188
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceVersionCode()Ljava/lang/String;

    move-result-object v2

    const-string v3, "device_version_code"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 189
    const-string v2, "client_info"

    invoke-virtual {p1, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 191
    return-void
.end method

.method public varargs putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V
    .locals 2
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 195
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;

    move-result-object v0

    .line 196
    .local v0, "json":Lorg/json/JSONObject;
    if-eqz v0, :cond_0

    .line 197
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putBasicData(Lorg/json/JSONObject;)V

    .line 198
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->pContent:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 202
    .end local v0    # "json":Lorg/json/JSONObject;
    :cond_0
    nop

    .line 203
    return-void

    .line 200
    :catch_0
    move-exception v0

    .line 201
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public setAttachment(Lcom/bianfeng/ymnsdk/action/ActionAttachment;)V
    .locals 0
    .param p1, "attachment"    # Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 43
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->attachment:Lcom/bianfeng/ymnsdk/action/ActionAttachment;

    .line 44
    return-void
.end method

.method public setPayloadEntity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "sub"    # Ljava/lang/String;
    .param p2, "uid"    # Ljava/lang/String;
    .param p3, "trace"    # Ljava/lang/String;

    .line 154
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<TT;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

    invoke-direct {v0, p1, p2}, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->payloadEntity:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

    .line 156
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->trace:Ljava/lang/String;

    .line 157
    return-void
.end method
