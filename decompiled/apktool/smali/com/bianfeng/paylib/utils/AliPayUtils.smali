.class public Lcom/bianfeng/paylib/utils/AliPayUtils;
.super Ljava/lang/Object;
.source "AliPayUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static pay(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 2

    .line 17
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    const-class v1, Lcom/bianfeng/paylib/entity/AliPayEntity;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/paylib/entity/AliPayEntity;

    .line 18
    new-instance v0, Ljava/lang/String;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/entity/AliPayEntity;->getToken()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/paylib/alipaysdk/util/Base64;->decode(Ljava/lang/String;)[B

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    .line 19
    new-instance p1, Lcom/bianfeng/paylib/utils/AliPayUtils$1;

    invoke-direct {p1}, Lcom/bianfeng/paylib/utils/AliPayUtils$1;-><init>()V

    invoke-static {p0, v0, p1}, Lcom/bianfeng/paylib/alipaysdk/PaySdk;->pay(Landroid/app/Activity;Ljava/lang/String;Lcom/bianfeng/paylib/alipaysdk/OnPayListener;)V

    return-void
.end method
