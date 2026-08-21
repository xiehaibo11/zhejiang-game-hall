.class public interface abstract Lcom/tkay/core/api/TYBiddingNotice;
.super Ljava/lang/Object;


# static fields
.field public static final ADN_ID:Ljava/lang/String; = "adn_id"


# virtual methods
.method public abstract getNoticePriceCurrency()Lcom/tkay/core/api/TYAdConst$CURRENCY;
.end method

.method public abstract notifyBidDisplay(ZD)V
.end method

.method public abstract notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "D",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract notifyBidWin(D)V
.end method
