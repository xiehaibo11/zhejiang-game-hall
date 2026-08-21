.class public Lcom/tkay/core/api/ErrorCode;
.super Ljava/lang/Object;


# static fields
.field public static final adShowError:Ljava/lang/String; = "4006"

.field public static final adSourceBidError:Ljava/lang/String; = "4007"

.field public static final adSourceNotFilledError:Ljava/lang/String; = "4008"

.field public static final adapterInnerError:Ljava/lang/String; = "2006"

.field public static final adapterNotExistError:Ljava/lang/String; = "2002"

.field public static final appIdError:Ljava/lang/String; = "10003"

.field public static final appIdOrPlaceIdEmpty:Ljava/lang/String; = "3002"

.field public static final appKeyError:Ljava/lang/String; = "10001"

.field public static final c2sBiddingCacheError:Ljava/lang/String; = "2012"

.field public static final contextDestoryError:Ljava/lang/String; = "4002"

.field public static final dataLevelLowError:Ljava/lang/String; = "9992"

.field public static final exception:Ljava/lang/String; = "9999"

.field public static final filterSourceError:Ljava/lang/String; = "2010"

.field public static final formatError:Ljava/lang/String; = "3003"

.field public static final httpStatuException:Ljava/lang/String; = "9990"

.field public static final inNetworkErrorCodeRequestFailPacing:Ljava/lang/String; = "2014"

.field public static final inPacingError:Ljava/lang/String; = "2004"

.field public static final inRequestFailPacing:Ljava/lang/String; = "2007"

.field public static final loadCappingError:Ljava/lang/String; = "2009"

.field public static final loadFailInPacingError:Ljava/lang/String; = "2008"

.field public static final loadInShowingFilter:Ljava/lang/String; = "2011"

.field public static final loadingError:Ljava/lang/String; = "2005"

.field public static final networkError:Ljava/lang/String; = "1001"

.field public static final networkFirmIdfilterSourceError:Ljava/lang/String; = "2013"

.field public static final noADError:Ljava/lang/String; = "4001"

.field public static final noAdsourceConfig:Ljava/lang/String; = "4004"

.field public static final noAdsourceConfigInDebugerMode:Ljava/lang/String; = "4009"

.field public static final noAvailableAdsource:Ljava/lang/String; = "4005"

.field public static final outOfCapError:Ljava/lang/String; = "2003"

.field public static final placeStrategyError:Ljava/lang/String; = "3001"

.field public static final placementAdClose:Ljava/lang/String; = "4003"

.field public static final placementIdError:Ljava/lang/String; = "10004"

.field public static final serverError:Ljava/lang/String; = "1002"

.field public static final statuError:Ljava/lang/String; = "9991"

.field public static final timeOutError:Ljava/lang/String; = "2001"

.field public static final unknown:Ljava/lang/String; = "-9999"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;
    .locals 26

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    .line 63
    invoke-virtual/range {p0 .. p0}, Ljava/lang/String;->hashCode()I

    move-result v3

    const-string v5, "4005"

    const-string v6, "4004"

    const-string v7, "4003"

    const-string v8, "4002"

    const-string v9, "4001"

    const-string v10, "3003"

    const-string v11, "3002"

    const-string v12, "3001"

    const-string v13, "2012"

    const-string v14, "2011"

    const-string v15, "2009"

    const-string v4, "2008"

    const-string v1, "2007"

    const-string v2, "2006"

    move-object/from16 v17, v2

    const-string v2, "2005"

    move-object/from16 v18, v2

    const-string v2, "2004"

    move-object/from16 v19, v2

    const-string v2, "2003"

    move-object/from16 v20, v2

    const-string v2, "2002"

    move-object/from16 v21, v2

    const-string v2, "2001"

    move-object/from16 v22, v2

    const-string v2, "1002"

    move-object/from16 v23, v2

    const-string v2, "1001"

    move-object/from16 v24, v2

    const-string v2, "4009"

    move-object/from16 v25, v1

    const v1, 0x1ac640

    if-eq v3, v1, :cond_b

    const v1, 0x2c90bb2

    if-eq v3, v1, :cond_a

    packed-switch v3, :pswitch_data_0

    packed-switch v3, :pswitch_data_1

    packed-switch v3, :pswitch_data_2

    packed-switch v3, :pswitch_data_3

    packed-switch v3, :pswitch_data_4

    packed-switch v3, :pswitch_data_5

    packed-switch v3, :pswitch_data_6

    :cond_0
    :goto_0
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    :goto_1
    move-object/from16 v3, v19

    goto/16 :goto_4

    :pswitch_0
    const-string v1, "10004"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x15

    goto/16 :goto_2

    :pswitch_1
    const-string v1, "10003"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x14

    goto/16 :goto_2

    :pswitch_2
    const-string v1, "9992"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x3

    goto/16 :goto_2

    :pswitch_3
    const-string v1, "9991"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x2

    goto/16 :goto_2

    :pswitch_4
    const-string v1, "9990"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto/16 :goto_2

    :pswitch_5
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x1f

    goto/16 :goto_2

    :pswitch_6
    const-string v1, "4008"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x1d

    goto/16 :goto_2

    :pswitch_7
    const-string v1, "4007"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x1c

    goto/16 :goto_2

    :pswitch_8
    const-string v1, "4006"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x17

    goto/16 :goto_2

    :pswitch_9
    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x16

    goto/16 :goto_2

    :pswitch_a
    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x11

    goto/16 :goto_2

    :pswitch_b
    invoke-virtual {v0, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x10

    goto/16 :goto_2

    :pswitch_c
    invoke-virtual {v0, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xd

    goto/16 :goto_2

    :pswitch_d
    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x9

    goto/16 :goto_2

    :pswitch_e
    invoke-virtual {v0, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xf

    goto/16 :goto_2

    :pswitch_f
    invoke-virtual {v0, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xe

    goto :goto_2

    :pswitch_10
    invoke-virtual {v0, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xa

    goto :goto_2

    :pswitch_11
    const-string v1, "2013"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x20

    goto :goto_2

    :pswitch_12
    invoke-virtual {v0, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x1e

    goto :goto_2

    :pswitch_13
    invoke-virtual {v0, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x1b

    goto :goto_2

    :pswitch_14
    invoke-virtual {v0, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x1a

    goto :goto_2

    :pswitch_15
    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x19

    goto :goto_2

    :pswitch_16
    move-object/from16 v1, v25

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/16 v0, 0x18

    move-object/from16 v25, v1

    goto :goto_2

    :cond_1
    move-object/from16 v25, v1

    goto/16 :goto_0

    :pswitch_17
    move-object/from16 v3, v17

    move-object/from16 v1, v25

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/16 v0, 0x12

    move-object/from16 v25, v1

    move-object/from16 v17, v3

    :goto_2
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    goto :goto_3

    :cond_2
    move-object/from16 v25, v1

    move-object/from16 v17, v3

    goto/16 :goto_0

    :pswitch_18
    move-object/from16 v3, v17

    move-object/from16 v1, v18

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/16 v0, 0xb

    move-object/from16 v17, v3

    move-object/from16 v16, v9

    :goto_3
    move-object/from16 v3, v19

    goto/16 :goto_5

    :cond_3
    move-object/from16 v17, v3

    move-object/from16 v16, v9

    goto/16 :goto_1

    :pswitch_19
    move-object/from16 v1, v18

    move-object/from16 v3, v19

    invoke-virtual {v0, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/16 v0, 0xc

    move-object/from16 v16, v9

    goto/16 :goto_5

    :cond_4
    move-object/from16 v16, v9

    goto/16 :goto_4

    :pswitch_1a
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    move-object/from16 v9, v20

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    const/16 v0, 0x8

    move-object/from16 v20, v9

    goto/16 :goto_5

    :cond_5
    move-object/from16 v20, v9

    goto/16 :goto_4

    :pswitch_1b
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    move-object/from16 v9, v21

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    const/4 v0, 0x7

    move-object/from16 v21, v9

    goto/16 :goto_5

    :cond_6
    move-object/from16 v21, v9

    goto/16 :goto_4

    :pswitch_1c
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    move-object/from16 v9, v22

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    const/4 v0, 0x6

    move-object/from16 v22, v9

    goto :goto_5

    :cond_7
    move-object/from16 v22, v9

    goto :goto_4

    :pswitch_1d
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    move-object/from16 v9, v23

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    const/4 v0, 0x5

    move-object/from16 v23, v9

    goto :goto_5

    :cond_8
    move-object/from16 v23, v9

    goto :goto_4

    :pswitch_1e
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    move-object/from16 v9, v24

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    const/4 v0, 0x4

    move-object/from16 v24, v9

    goto :goto_5

    :cond_9
    move-object/from16 v24, v9

    goto :goto_4

    :cond_a
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    const-string v9, "10001"

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    const/16 v0, 0x13

    goto :goto_5

    :cond_b
    move-object/from16 v16, v9

    move-object/from16 v1, v18

    move-object/from16 v3, v19

    const-string v9, "9999"

    invoke-virtual {v0, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    const/4 v0, 0x0

    goto :goto_5

    :cond_c
    :goto_4
    const/4 v0, -0x1

    :goto_5
    packed-switch v0, :pswitch_data_7

    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 131
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "-9999"

    const-string v3, "unknown"

    invoke-direct {v1, v2, v3, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 129
    :pswitch_1f
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "AdSource filter by network firm id."

    move-object/from16 v9, p1

    move-object/from16 v12, p2

    invoke-direct {v0, v2, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_20
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 127
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "The placement strategy does not contain any ad sources, please check the debugger configuration in TYSDK.setDebuggerConfig"

    invoke-direct {v0, v2, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_21
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 125
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "C2S Bidding Cache error."

    invoke-direct {v0, v13, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_22
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 123
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "4008"

    const-string v2, "Ad source not filled, cause by customize fillter."

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_23
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 121
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "4007"

    const-string v2, "Bid error"

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_24
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 119
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "This unitgroup can\'t load on showing."

    invoke-direct {v0, v14, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_25
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 117
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "The placement load too many times within the specified time period."

    invoke-direct {v0, v15, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_26
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 115
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "The placement load too frequent within the specified time period after the previous load failure."

    invoke-direct {v0, v4, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_27
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    move-object/from16 v0, v25

    .line 113
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Not satisfy the Fail-request\'s Placing configuration."

    invoke-direct {v1, v0, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_28
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 111
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "4006"

    const-string v2, "Ad show failed"

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_29
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 109
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "Ad sources are filtered, no ad source is currently available"

    invoke-direct {v0, v5, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_2a
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 107
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "10004"

    const-string v2, "Please check your placementid."

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_2b
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 105
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "10003"

    const-string v2, "Please check your appid."

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_2c
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 103
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "10001"

    const-string v2, "Please check your appkey."

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_2d
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    move-object/from16 v0, v17

    .line 101
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Please check if your network sdk version is correct and all the network plugin has been put in your package."

    invoke-direct {v1, v0, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_2e
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 99
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "The placement strategy does not contain any ad sources, please check the mediation configuration in TY"

    invoke-direct {v0, v6, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_2f
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 97
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "Placement Ads switch is close."

    invoke-direct {v0, v7, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_30
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 95
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "Mismatched ad placement and ad format"

    invoke-direct {v0, v10, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_31
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 93
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "AppId or PlacementId is empty."

    invoke-direct {v0, v11, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_32
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 91
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "Context or activity has been destory."

    invoke-direct {v0, v8, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_33
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 89
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v1, "Not satisfy the Placement\'s Placing configuration."

    invoke-direct {v0, v3, v1, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_34
    move-object/from16 v9, p1

    move-object/from16 v12, p2

    .line 87
    new-instance v0, Lcom/tkay/core/api/AdError;

    const-string v2, "Placement\'s Ad is loading."

    invoke-direct {v0, v1, v2, v9, v12}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    :pswitch_35
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 85
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Get placement strategy error, please check your network or your appid\u3001appkey and placementid is availiable."

    invoke-direct {v1, v12, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_36
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 83
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Return Ad is empty."

    move-object/from16 v3, v16

    invoke-direct {v1, v3, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_37
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 81
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Not satisfy the Placement\'s Cap configuration."

    move-object/from16 v3, v20

    invoke-direct {v1, v3, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_38
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 79
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Adapter does not exist."

    move-object/from16 v3, v21

    invoke-direct {v1, v3, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_39
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 77
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Ad load time out."

    move-object/from16 v3, v22

    invoke-direct {v1, v3, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_3a
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 75
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Server is unavailable."

    move-object/from16 v3, v23

    invoke-direct {v1, v3, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_3b
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 73
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "Network is unavailable."

    move-object/from16 v3, v24

    invoke-direct {v1, v3, v2, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_3c
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 71
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "9992"

    const-string v3, "Upload data level is FORBIDDEN, must called \'TYSDK.setGDPRUploadDataLevel\' to set the level."

    invoke-direct {v1, v2, v3, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_3d
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 69
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "9991"

    const-string v3, "Service status error."

    invoke-direct {v1, v2, v3, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_3e
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 67
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "9990"

    const-string v3, "Https status exception."

    invoke-direct {v1, v2, v3, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_3f
    move-object/from16 v9, p1

    move-object/from16 v0, p2

    .line 65
    new-instance v1, Lcom/tkay/core/api/AdError;

    const-string v2, "9999"

    const-string v3, "Exception in sdk."

    invoke-direct {v1, v2, v3, v9, v0}, Lcom/tkay/core/api/AdError;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :pswitch_data_0
    .packed-switch 0x170060
        :pswitch_1e
        :pswitch_1d
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1774bf
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0x1774de
        :pswitch_13
        :pswitch_12
        :pswitch_11
    .end packed-switch

    :pswitch_data_3
    .packed-switch 0x17e91e
        :pswitch_10
        :pswitch_f
        :pswitch_e
    .end packed-switch

    :pswitch_data_4
    .packed-switch 0x185d7d
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
    .end packed-switch

    :pswitch_data_5
    .packed-switch 0x1ac637
        :pswitch_4
        :pswitch_3
        :pswitch_2
    .end packed-switch

    :pswitch_data_6
    .packed-switch 0x2c90bb4
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :pswitch_data_7
    .packed-switch 0x0
        :pswitch_3f
        :pswitch_3e
        :pswitch_3d
        :pswitch_3c
        :pswitch_3b
        :pswitch_3a
        :pswitch_39
        :pswitch_38
        :pswitch_37
        :pswitch_36
        :pswitch_35
        :pswitch_34
        :pswitch_33
        :pswitch_32
        :pswitch_31
        :pswitch_30
        :pswitch_2f
        :pswitch_2e
        :pswitch_2d
        :pswitch_2c
        :pswitch_2b
        :pswitch_2a
        :pswitch_29
        :pswitch_28
        :pswitch_27
        :pswitch_26
        :pswitch_25
        :pswitch_24
        :pswitch_23
        :pswitch_22
        :pswitch_21
        :pswitch_20
        :pswitch_1f
    .end packed-switch
.end method
