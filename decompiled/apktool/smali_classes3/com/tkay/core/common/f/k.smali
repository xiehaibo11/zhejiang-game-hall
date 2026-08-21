.class public Lcom/tkay/core/common/f/k;
.super Ljava/lang/Object;


# static fields
.field public static final EXPIRE_LOSS:I = 0x1

.field public static final LOW_PRICE_LOSS:I = 0x2

.field public static final NO_LOSS_NOTICE:I = 0x3


# instance fields
.field public biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

.field public currency:Lcom/tkay/core/api/TYAdConst$CURRENCY;

.field public displayNoticeUrl:Ljava/lang/String;

.field public errorMsg:Ljava/lang/String;

.field protected isSuccess:Z

.field public loseNoticeUrl:Ljava/lang/String;

.field public originPrice:D

.field protected price:D

.field protected sortPrice:D

.field public token:Ljava/lang/String;

.field public useType:I

.field public winNoticeUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>(ZDLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V
    .locals 1

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 28
    iput v0, p0, Lcom/tkay/core/common/f/k;->useType:I

    .line 49
    iput-boolean p1, p0, Lcom/tkay/core/common/f/k;->isSuccess:Z

    .line 50
    iput-wide p2, p0, Lcom/tkay/core/common/f/k;->originPrice:D

    .line 51
    iput-wide p2, p0, Lcom/tkay/core/common/f/k;->price:D

    .line 52
    iput-wide p2, p0, Lcom/tkay/core/common/f/k;->sortPrice:D

    .line 53
    iput-object p4, p0, Lcom/tkay/core/common/f/k;->token:Ljava/lang/String;

    .line 54
    iput-object p5, p0, Lcom/tkay/core/common/f/k;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    .line 55
    iput-object p6, p0, Lcom/tkay/core/common/f/k;->errorMsg:Ljava/lang/String;

    .line 56
    iput-object p7, p0, Lcom/tkay/core/common/f/k;->currency:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-void
.end method

.method public constructor <init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V
    .locals 1

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 28
    iput v0, p0, Lcom/tkay/core/common/f/k;->useType:I

    .line 36
    iput-boolean p1, p0, Lcom/tkay/core/common/f/k;->isSuccess:Z

    .line 37
    iput-wide p2, p0, Lcom/tkay/core/common/f/k;->originPrice:D

    .line 38
    iput-wide p2, p0, Lcom/tkay/core/common/f/k;->price:D

    .line 39
    iput-wide p2, p0, Lcom/tkay/core/common/f/k;->sortPrice:D

    .line 40
    iput-object p4, p0, Lcom/tkay/core/common/f/k;->token:Ljava/lang/String;

    .line 41
    iput-object p5, p0, Lcom/tkay/core/common/f/k;->winNoticeUrl:Ljava/lang/String;

    .line 42
    iput-object p6, p0, Lcom/tkay/core/common/f/k;->loseNoticeUrl:Ljava/lang/String;

    .line 43
    iput-object p7, p0, Lcom/tkay/core/common/f/k;->displayNoticeUrl:Ljava/lang/String;

    .line 44
    iput-object p8, p0, Lcom/tkay/core/common/f/k;->errorMsg:Ljava/lang/String;

    .line 45
    iput-object p9, p0, Lcom/tkay/core/common/f/k;->currency:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-void
.end method


# virtual methods
.method public getPrice()D
    .locals 2

    .line 73
    iget-wide v0, p0, Lcom/tkay/core/common/f/k;->price:D

    return-wide v0
.end method

.method public getSortPrice()D
    .locals 2

    .line 81
    iget-wide v0, p0, Lcom/tkay/core/common/f/k;->sortPrice:D

    return-wide v0
.end method

.method public isSuccessWithUseType()Z
    .locals 2

    .line 64
    iget-boolean v0, p0, Lcom/tkay/core/common/f/k;->isSuccess:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/tkay/core/common/f/k;->useType:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public setBiddingNotice(Lcom/tkay/core/api/TYBiddingNotice;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/core/common/f/k;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    return-void
.end method

.method public setPrice(D)V
    .locals 0

    .line 69
    iput-wide p1, p0, Lcom/tkay/core/common/f/k;->price:D

    return-void
.end method

.method public setSortPrice(D)V
    .locals 0

    .line 77
    iput-wide p1, p0, Lcom/tkay/core/common/f/k;->sortPrice:D

    return-void
.end method
