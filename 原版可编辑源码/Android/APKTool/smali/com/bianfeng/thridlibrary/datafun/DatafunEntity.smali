.class public Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;
.super Ljava/lang/Object;
.source "DatafunEntity.java"


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

    .line 27
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->area_name:Ljava/lang/String;

    return-object v0
.end method

.method public getEvent_id()I
    .locals 1

    .line 19
    iget v0, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->event_id:I

    return v0
.end method

.method public getIs_user_new()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->is_user_new:Ljava/lang/String;

    return-object v0
.end method

.method public getUser_name()Ljava/lang/String;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->user_name:Ljava/lang/String;

    return-object v0
.end method

.method public setArea_name(Ljava/lang/String;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->area_name:Ljava/lang/String;

    return-void
.end method

.method public setEvent_id(I)V
    .locals 0

    .line 23
    iput p1, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->event_id:I

    return-void
.end method

.method public setIs_user_new(Ljava/lang/String;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->is_user_new:Ljava/lang/String;

    return-void
.end method

.method public setUser_name(Ljava/lang/String;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/bianfeng/thridlibrary/datafun/DatafunEntity;->user_name:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 52
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
