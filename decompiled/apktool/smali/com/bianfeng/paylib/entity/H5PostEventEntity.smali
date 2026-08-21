.class public Lcom/bianfeng/paylib/entity/H5PostEventEntity;
.super Ljava/lang/Object;
.source "H5PostEventEntity.java"


# instance fields
.field private area_name:Ljava/lang/String;

.field private event_id:I

.field private is_user_new:Ljava/lang/String;

.field private user_name:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getArea_name()Ljava/lang/String;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->area_name:Ljava/lang/String;

    return-object v0
.end method

.method public getEvent_id()I
    .locals 1

    .line 20
    iget v0, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->event_id:I

    return v0
.end method

.method public getIs_user_new()Ljava/lang/String;
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->is_user_new:Ljava/lang/String;

    return-object v0
.end method

.method public getUser_name()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->user_name:Ljava/lang/String;

    return-object v0
.end method

.method public setArea_name(Ljava/lang/String;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->area_name:Ljava/lang/String;

    return-void
.end method

.method public setEvent_id(I)V
    .locals 0

    .line 24
    iput p1, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->event_id:I

    return-void
.end method

.method public setIs_user_new(Ljava/lang/String;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->is_user_new:Ljava/lang/String;

    return-void
.end method

.method public setUser_name(Ljava/lang/String;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/H5PostEventEntity;->user_name:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 53
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
