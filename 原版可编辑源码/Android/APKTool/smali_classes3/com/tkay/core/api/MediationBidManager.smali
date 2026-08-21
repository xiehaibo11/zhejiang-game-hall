.class public abstract Lcom/tkay/core/api/MediationBidManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/api/MediationBidManager$BidListener;
    }
.end annotation


# static fields
.field public static final NO_BID_TOKEN_ERROR:Ljava/lang/String; = "NO_BID_TOKEN"


# instance fields
.field protected mRequestUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract notifyWinnerDisplay(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
.end method

.method public setBidRequestUrl(Ljava/lang/String;)V
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/tkay/core/api/MediationBidManager;->mRequestUrl:Ljava/lang/String;

    return-void
.end method

.method public abstract startBid(Lcom/tkay/core/common/f/ag;Lcom/tkay/core/api/MediationBidManager$BidListener;)V
.end method
