.class public abstract Lcom/bianfeng/paylib/action/ActionSupport;
.super Ljava/util/Observable;
.source "ActionSupport.java"

# interfaces
.implements Lcom/bianfeng/paylib/action/HttpListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/Observable;",
        "Lcom/bianfeng/paylib/action/HttpListener;"
    }
.end annotation


# instance fields
.field protected attachment:Lcom/bianfeng/paylib/action/ActionAttachment;

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

.field protected httpHelper:Lcom/bianfeng/paylib/action/HttpHelper;

.field protected pContent:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 111
    invoke-direct {p0}, Ljava/util/Observable;-><init>()V

    .line 112
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->context:Landroid/content/Context;

    .line 113
    new-instance v0, Lcom/bianfeng/paylib/action/HttpHelper;

    invoke-direct {v0, p1}, Lcom/bianfeng/paylib/action/HttpHelper;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport;->httpHelper:Lcom/bianfeng/paylib/action/HttpHelper;

    const/4 p1, 0x2

    .line 114
    invoke-virtual {v0, p1}, Lcom/bianfeng/paylib/action/HttpHelper;->setMethod(I)V

    .line 115
    new-instance p1, Ljava/util/TreeMap;

    invoke-direct {p1}, Ljava/util/TreeMap;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/paylib/action/ActionSupport;Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 0

    .line 19
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->notifyResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method private notifyResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 2

    .line 218
    invoke-virtual {p0}, Lcom/bianfeng/paylib/action/ActionSupport;->setChanged()V

    .line 219
    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->isResponsed()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 221
    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 222
    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->onSuccess(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->access$102(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 225
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 230
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport;->attachment:Lcom/bianfeng/paylib/action/ActionAttachment;

    if-eqz v0, :cond_1

    .line 231
    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/paylib/action/ActionAttachment;->onEnd(Landroid/content/Context;)V

    .line 233
    :cond_1
    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method private parseResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 5

    .line 183
    :try_start_0
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->showDebugLog(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    .line 184
    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 185
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v2, "do action response error code = %d msg = %s"

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getCode()I

    move-result v4

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v1

    const/4 v1, 0x1

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getMsg()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v3, v1

    invoke-static {v2, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    goto :goto_0

    .line 187
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "trade_request_type"

    .line 188
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "ERROR"

    .line 189
    invoke-virtual {v3, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/16 v1, 0x25b

    .line 190
    invoke-virtual {p1, v1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->setCode(I)V

    .line 191
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    const-string v2, "ymnsdk"

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "trade_request_content"

    .line 192
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->setMsg(Ljava/lang/String;)V

    goto :goto_0

    .line 194
    :cond_1
    invoke-virtual {p1, v1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->setCode(I)V

    .line 195
    invoke-virtual {p1, v0}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->setData(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 199
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/16 v0, 0x25a

    .line 200
    invoke-virtual {p1, v0}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->setCode(I)V

    const-string v0, "parse response json error"

    .line 201
    invoke-virtual {p1, v0}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->setMsg(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private showDebugLog(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 4

    .line 206
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 207
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[CONTEXT] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/paylib/action/ActionSupport;->context:Landroid/content/Context;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    .line 208
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 209
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[REQUEST] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/paylib/action/ActionSupport;->getURL()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 210
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 211
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[CONTENT] "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/paylib/action/ActionSupport;->pContent:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 212
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 213
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[RESPONSE] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getSrcRes()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 214
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->dRich(Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public actionStart()V
    .locals 1

    .line 122
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/paylib/action/ActionSupport;->getURL()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/action/ActionSupport;->doRequest(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 124
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public doRequest(Ljava/lang/String;)V
    .locals 5

    .line 143
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 144
    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->gContent:Ljava/util/TreeMap;

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

    .line 145
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

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 148
    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_1

    .line 149
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 152
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport;->attachment:Lcom/bianfeng/paylib/action/ActionAttachment;

    if-eqz v0, :cond_2

    .line 153
    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->context:Landroid/content/Context;

    invoke-interface {v0, v1}, Lcom/bianfeng/paylib/action/ActionAttachment;->onStart(Landroid/content/Context;)V

    .line 155
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport;->httpHelper:Lcom/bianfeng/paylib/action/HttpHelper;

    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->pContent:Ljava/lang/String;

    invoke-virtual {v0, p1, v1, p0}, Lcom/bianfeng/paylib/action/HttpHelper;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/paylib/action/HttpListener;)V

    return-void
.end method

.method protected formatType(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2

    .line 250
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 252
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_0
    return-object p1
.end method

.method protected formatUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    const-string v2, "v2"

    aput-object v2, v0, v1

    const/4 v1, 0x1

    aput-object p1, v0, v1

    const-string p1, "%s/%s"

    .line 246
    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected abstract getURL()Ljava/lang/String;
.end method

.method public onComplete(Ljava/lang/String;)V
    .locals 1

    .line 160
    new-instance v0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;-><init>(Lcom/bianfeng/paylib/action/ActionSupport;Ljava/lang/String;)V

    .line 161
    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/action/ActionSupport;->processResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1

    .line 166
    new-instance v0, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;

    invoke-direct {v0, p0, p1, p2}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;-><init>(Lcom/bianfeng/paylib/action/ActionSupport;ILjava/lang/String;)V

    .line 167
    invoke-virtual {p0, v0}, Lcom/bianfeng/paylib/action/ActionSupport;->processResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    return-void
.end method

.method public abstract onPrepareData(Ljava/util/Map;)Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method protected abstract onSuccess(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public processResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V
    .locals 2

    .line 171
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->parseResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    .line 172
    iget-object v0, p0, Lcom/bianfeng/paylib/action/ActionSupport;->context:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/paylib/action/ActionSupport$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport$1;-><init>(Lcom/bianfeng/paylib/action/ActionSupport;Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 178
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->notifyResponseResult(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)V

    :goto_0
    return-void
.end method

.method public putReqData(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 130
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;->onPrepareData(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 132
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->pContent:Ljava/lang/String;

    .line 133
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "putReqData\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->pContent:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 136
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public setAttachment(Lcom/bianfeng/paylib/action/ActionAttachment;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/bianfeng/paylib/action/ActionSupport;->attachment:Lcom/bianfeng/paylib/action/ActionAttachment;

    return-void
.end method
