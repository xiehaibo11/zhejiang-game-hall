.class public Lcom/bianfeng/paylib/entity/ExtinfoEntity;
.super Ljava/lang/Object;
.source "ExtinfoEntity.java"


# instance fields
.field private server:Ljava/lang/String;

.field private third_uid:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getServer()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/ExtinfoEntity;->server:Ljava/lang/String;

    return-object v0
.end method

.method public getThird_uid()Ljava/lang/String;
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/ExtinfoEntity;->third_uid:Ljava/lang/String;

    return-object v0
.end method

.method public setServer(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/ExtinfoEntity;->server:Ljava/lang/String;

    return-void
.end method

.method public setThird_uid(Ljava/lang/String;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/ExtinfoEntity;->third_uid:Ljava/lang/String;

    return-void
.end method
