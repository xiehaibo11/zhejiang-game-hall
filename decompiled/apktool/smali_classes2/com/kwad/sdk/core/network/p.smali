.class public abstract Lcom/kwad/sdk/core/network/p;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/network/h;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<R::",
        "Lcom/kwad/sdk/core/network/g;",
        "T:",
        "Lcom/kwad/sdk/core/network/BaseResultData;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/network/h<",
        "TR;TT;>;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onError(Lcom/kwad/sdk/core/network/g;ILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;I",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    return-void
.end method

.method public onStartRequest(Lcom/kwad/sdk/core/network/g;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;)V"
        }
    .end annotation

    return-void
.end method

.method public onSuccess(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/BaseResultData;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TR;TT;)V"
        }
    .end annotation

    return-void
.end method
