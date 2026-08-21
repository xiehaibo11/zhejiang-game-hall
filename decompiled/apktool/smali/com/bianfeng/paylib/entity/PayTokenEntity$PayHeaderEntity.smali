.class public Lcom/bianfeng/paylib/entity/PayTokenEntity$PayHeaderEntity;
.super Ljava/lang/Object;
.source "PayTokenEntity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/entity/PayTokenEntity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "PayHeaderEntity"
.end annotation


# instance fields
.field private alg:Ljava/lang/String;

.field private typ:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "HS256"

    .line 13
    iput-object v0, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayHeaderEntity;->alg:Ljava/lang/String;

    const-string v0, "JWT"

    .line 14
    iput-object v0, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayHeaderEntity;->typ:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 18
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
