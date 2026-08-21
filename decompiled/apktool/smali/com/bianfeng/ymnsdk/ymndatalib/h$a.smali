.class public Lcom/bianfeng/ymnsdk/ymndatalib/h$a;
.super Ljava/lang/Object;
.source "YmndataWhiteListSdk.java"

# interfaces
.implements Lcom/bianfeng/netlibsdk/BaseRequest$Listener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/ymndatalib/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bianfeng/netlibsdk/BaseRequest$Listener<",
        "Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean;",
        ">;"
    }
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/ymnsdk/ymndatalib/h;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/ymndatalib/h;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean;)V
    .locals 4

    .line 1
    const/4 v0, 0x1

    :try_start_0
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean;->getCode()I

    move-result v1

    if-nez v1, :cond_3

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean;->getData()Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean$DataBean;

    move-result-object p1

    .line 3
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean$DataBean;->getFunctions()Ljava/util/List;

    move-result-object v1

    if-eqz p1, :cond_2

    if-nez v1, :cond_0

    goto :goto_1

    .line 8
    :cond_0
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 9
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Lcom/bianfeng/ymnsdk/ymndatalib/h;)Ljava/util/Map;

    move-result-object v2

    const-string v3, "1"

    invoke-interface {v2, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 11
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    const/4 v1, 0x0

    invoke-static {p1, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Lcom/bianfeng/ymnsdk/ymndatalib/h;Z)Z

    goto :goto_2

    .line 12
    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Lcom/bianfeng/ymnsdk/ymndatalib/h;Z)Z

    return-void

    .line 20
    :cond_3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Lcom/bianfeng/ymnsdk/ymndatalib/h;Z)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 11
    :goto_2
    goto :goto_3

    .line 23
    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 24
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Lcom/bianfeng/ymnsdk/ymndatalib/h;Z)Z

    :goto_3
    return-void
.end method

.method public onFail(Ljava/lang/String;)V
    .locals 1

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a:Lcom/bianfeng/ymnsdk/ymndatalib/h;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a(Lcom/bianfeng/ymnsdk/ymndatalib/h;Z)Z

    return-void
.end method

.method public bridge synthetic onSuccess(Ljava/lang/Object;)V
    .locals 0

    .line 1
    check-cast p1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/h$a;->a(Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/WhitelistBean;)V

    return-void
.end method
