.class public interface abstract Lcom/tkay/core/api/MediationBidManager$BidListener;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/api/MediationBidManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "BidListener"
.end annotation


# virtual methods
.method public abstract onBidFail(Ljava/lang/String;)V
.end method

.method public abstract onBidStart(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
.end method

.method public abstract onBidSuccess(Ljava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation
.end method
