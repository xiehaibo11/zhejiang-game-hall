.class public Lcom/tkay/core/api/TYBiddingResult;
.super Lcom/tkay/core/common/f/k;


# direct methods
.method private constructor <init>(ZDLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V
    .locals 0

    .line 16
    invoke-direct/range {p0 .. p7}, Lcom/tkay/core/common/f/k;-><init>(ZDLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V

    return-void
.end method

.method public static fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;
    .locals 9

    .line 37
    new-instance v8, Lcom/tkay/core/api/TYBiddingResult;

    sget-object v7, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    const/4 v1, 0x0

    const-wide/16 v2, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, v8

    move-object v6, p0

    invoke-direct/range {v0 .. v7}, Lcom/tkay/core/api/TYBiddingResult;-><init>(ZDLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V

    return-object v8
.end method

.method public static success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;)Lcom/tkay/core/api/TYBiddingResult;
    .locals 9

    .line 20
    new-instance v8, Lcom/tkay/core/api/TYBiddingResult;

    sget-object v7, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    const/4 v1, 0x1

    const/4 v6, 0x0

    move-object v0, v8

    move-wide v2, p0

    move-object v4, p2

    move-object v5, p3

    invoke-direct/range {v0 .. v7}, Lcom/tkay/core/api/TYBiddingResult;-><init>(ZDLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V

    return-object v8
.end method

.method public static success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;
    .locals 9

    .line 24
    new-instance v8, Lcom/tkay/core/api/TYBiddingResult;

    const/4 v1, 0x1

    const/4 v6, 0x0

    move-object v0, v8

    move-wide v2, p0

    move-object v4, p2

    move-object v5, p3

    move-object v7, p4

    invoke-direct/range {v0 .. v7}, Lcom/tkay/core/api/TYBiddingResult;-><init>(ZDLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V

    return-object v8
.end method
