.class public Lcom/bianfeng/paylib/entity/AliPayEntity;
.super Ljava/lang/Object;
.source "AliPayEntity.java"


# instance fields
.field private expire_at:Ljava/lang/String;

.field private token:Ljava/lang/String;


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

    .line 15
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/AliPayEntity;->expire_at:Ljava/lang/String;

    return-object v0
.end method

.method public getToken()Ljava/lang/String;
    .locals 1

    .line 23
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/AliPayEntity;->token:Ljava/lang/String;

    return-object v0
.end method

.method public setExpire_at(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/AliPayEntity;->expire_at:Ljava/lang/String;

    return-void
.end method

.method public setToken(Ljava/lang/String;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/AliPayEntity;->token:Ljava/lang/String;

    return-void
.end method
