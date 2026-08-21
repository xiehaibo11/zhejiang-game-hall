.class public Lcom/bianfeng/paylib/utils/WxPayUtils;
.super Ljava/lang/Object;
.source "WxPayUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static pay(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 16
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object p0

    const-class v0, Lcom/bianfeng/paylib/entity/WxPayEntity;

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/thridlibrary/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/paylib/entity/WxPayEntity;

    return-void
.end method
