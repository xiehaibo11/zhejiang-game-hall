.class public Lcom/bianfeng/loginlib/action/H5GameLoginAction;
.super Lcom/bianfeng/netlib/ActionSupport;
.source "H5GameLoginAction.java"


# instance fields
.field private map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Lcom/bianfeng/netlib/ActionSupport;-><init>(Landroid/app/Activity;)V

    .line 16
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->map:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 20
    invoke-static {}, Lcom/bianfeng/loginlib/utils/UrlManagerUtils;->getUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 12
    invoke-virtual {p0, p1}, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->onSuccess(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlib/ActionSupport$ResponseResult;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 26
    iget-object v0, p0, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->map:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "address"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 27
    iget-object p1, p0, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->map:Ljava/util/Map;

    return-object p1
.end method
