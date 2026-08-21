.class public Lcom/bianfeng/paylib/entity/WxPayEntity;
.super Ljava/lang/Object;
.source "WxPayEntity.java"


# instance fields
.field private appId:Ljava/lang/String;

.field private nonceStr:Ljava/lang/String;

.field private packageX:Ljava/lang/String;

.field private partnerId:Ljava/lang/String;

.field private prepayId:Ljava/lang/String;

.field private sign:Ljava/lang/String;

.field private timeStamp:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getAppId()Ljava/lang/String;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->appId:Ljava/lang/String;

    return-object v0
.end method

.method public getNonceStr()Ljava/lang/String;
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->nonceStr:Ljava/lang/String;

    return-object v0
.end method

.method public getPackageX()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->packageX:Ljava/lang/String;

    return-object v0
.end method

.method public getPartnerId()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->partnerId:Ljava/lang/String;

    return-object v0
.end method

.method public getPrepayId()Ljava/lang/String;
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->prepayId:Ljava/lang/String;

    return-object v0
.end method

.method public getSign()Ljava/lang/String;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->sign:Ljava/lang/String;

    return-object v0
.end method

.method public getTimeStamp()Ljava/lang/String;
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->timeStamp:Ljava/lang/String;

    return-object v0
.end method

.method public setAppId(Ljava/lang/String;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->appId:Ljava/lang/String;

    return-void
.end method

.method public setNonceStr(Ljava/lang/String;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->nonceStr:Ljava/lang/String;

    return-void
.end method

.method public setPackageX(Ljava/lang/String;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->packageX:Ljava/lang/String;

    return-void
.end method

.method public setPartnerId(Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->partnerId:Ljava/lang/String;

    return-void
.end method

.method public setPrepayId(Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->prepayId:Ljava/lang/String;

    return-void
.end method

.method public setSign(Ljava/lang/String;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->sign:Ljava/lang/String;

    return-void
.end method

.method public setTimeStamp(Ljava/lang/String;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/WxPayEntity;->timeStamp:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 86
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
