.class public Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;
.super Ljava/lang/Object;
.source "YmnWxWebpayEntity.java"


# instance fields
.field private expire_at:Ljava/lang/String;

.field private redirect_url:Ljava/lang/String;

.field private url_starts_with:Ljava/lang/String;

.field private web_open_type:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getExpire_at()Ljava/lang/String;
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->expire_at:Ljava/lang/String;

    return-object v0
.end method

.method public getRedirect_url()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->redirect_url:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl_starts_with()Ljava/lang/String;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->url_starts_with:Ljava/lang/String;

    return-object v0
.end method

.method public getWeb_open_type()I
    .locals 1

    .line 41
    iget v0, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->web_open_type:I

    return v0
.end method

.method public setExpire_at(Ljava/lang/String;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->expire_at:Ljava/lang/String;

    return-void
.end method

.method public setRedirect_url(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->redirect_url:Ljava/lang/String;

    return-void
.end method

.method public setUrl_starts_with(Ljava/lang/String;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->url_starts_with:Ljava/lang/String;

    return-void
.end method

.method public setWeb_open_type(I)V
    .locals 0

    .line 45
    iput p1, p0, Lcom/bianfeng/paylib/entity/YmnWxWebpayEntity;->web_open_type:I

    return-void
.end method
