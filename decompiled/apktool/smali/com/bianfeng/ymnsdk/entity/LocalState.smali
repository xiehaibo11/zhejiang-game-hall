.class public abstract Lcom/bianfeng/ymnsdk/entity/LocalState;
.super Lcom/bianfeng/ymnsdk/entity/Config;
.source "LocalState.java"


# instance fields
.field protected interacted:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/Config;-><init>()V

    return-void
.end method


# virtual methods
.method public isInteracted()Z
    .locals 1

    .line 18
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/entity/LocalState;->interacted:Z

    return v0
.end method

.method public setInteracted(Z)V
    .locals 0
    .param p1, "interacted"    # Z

    .line 11
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/entity/LocalState;->interacted:Z

    .line 12
    return-void
.end method
