.class public Lcom/bianfeng/roomlib/ui/GameRoomWebRequest;
.super Ljava/lang/Object;
.source "GameRoomWebRequest.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static startRequestWeb(Landroid/app/Activity;Ljava/util/TreeMap;Lcom/bianfeng/roomlib/ui/WebCallBack;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/bianfeng/roomlib/ui/WebCallBack;",
            ")V"
        }
    .end annotation

    .line 47
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "GameRoomWebRequest startRequestWeb=="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 49
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    .line 51
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    const-string v2, "params"

    invoke-virtual {p1, v2}, Ljava/util/TreeMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 52
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 54
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 55
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 56
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 57
    invoke-virtual {v0, v3, v4}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 60
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-string v1, "secret"

    .line 63
    invoke-virtual {p1, v1}, Ljava/util/TreeMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "true"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 64
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSignMd5()Lcom/bianfeng/utilslib/SignMd5Utils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/utilslib/SignMd5Utils;->getMd5(Ljava/util/TreeMap;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "sign"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    :cond_1
    new-instance v1, Lcom/bianfeng/roomlib/action/GameRoomAction;

    const-class v2, Ljava/lang/String;

    invoke-direct {v1, v0, v2}, Lcom/bianfeng/roomlib/action/GameRoomAction;-><init>(Ljava/util/Map;Ljava/lang/Class;)V

    const-string v0, "method"

    .line 68
    invoke-virtual {p1, v0}, Ljava/util/TreeMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v0, "get"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 69
    new-instance p1, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$1;

    invoke-direct {p1, p0, p2}, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$1;-><init>(Landroid/app/Activity;Lcom/bianfeng/roomlib/ui/WebCallBack;)V

    invoke-virtual {v1, p1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->startActionGet(Lcom/bianfeng/roomlib/action/ActionCallback;)V

    goto :goto_1

    .line 91
    :cond_2
    new-instance p1, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

    invoke-direct {p1, p0, p2}, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;-><init>(Landroid/app/Activity;Lcom/bianfeng/roomlib/ui/WebCallBack;)V

    invoke-virtual {v1, p1}, Lcom/bianfeng/roomlib/action/GameRoomAction;->startActionPost(Lcom/bianfeng/roomlib/action/ActionCallback;)V

    :goto_1
    return-void
.end method
