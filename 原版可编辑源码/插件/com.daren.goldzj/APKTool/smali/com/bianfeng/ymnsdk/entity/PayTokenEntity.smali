.class public Lcom/bianfeng/ymnsdk/entity/PayTokenEntity;
.super Ljava/lang/Object;
.source "PayTokenEntity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;,
        Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;
    }
.end annotation


# static fields
.field public static getHeader:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity;->getHeader:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
