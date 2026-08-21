.class public abstract Lcom/bianfeng/seppellita/db/action/BaseDataTast;
.super Ljava/lang/Object;
.source "BaseDataTast.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private name:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/db/action/DataTaskEnum;)V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 8
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->name:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    return-void
.end method


# virtual methods
.method public getName()Lcom/bianfeng/seppellita/db/action/DataTaskEnum;
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/action/BaseDataTast;->name:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    return-object v0
.end method
