.class public Lcom/tkay/network/mintegral/MintegralTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# static fields
.field private static final i:Ljava/lang/String;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:I

.field g:I

.field h:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 44
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->i:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 42
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 77
    new-instance v0, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-direct {v0, v1, p2, p3}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const-string p3, "0"

    const/16 v1, 0x31

    const/16 v2, 0x30

    const/4 v3, 0x0

    const-string v4, "1"

    const/4 v5, -0x1

    const/4 v6, 0x2

    const/4 v7, 0x1

    if-nez p2, :cond_5

    .line 79
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v8

    if-eq v8, v2, :cond_1

    if-eq v8, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    move p2, v7

    goto :goto_1

    :cond_1
    invoke-virtual {p2, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    move p2, v3

    goto :goto_1

    :cond_2
    :goto_0
    move p2, v5

    :goto_1
    if-eqz p2, :cond_4

    if-eq p2, v7, :cond_3

    goto :goto_2

    .line 84
    :cond_3
    invoke-virtual {v0, v6}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setPlayMuteState(I)V

    goto :goto_2

    .line 81
    :cond_4
    invoke-virtual {v0, v7}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setPlayMuteState(I)V

    .line 89
    :cond_5
    :goto_2
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_a

    .line 90
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v8

    packed-switch v8, :pswitch_data_0

    goto :goto_3

    :pswitch_0
    const-string v8, "3"

    invoke-virtual {p2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_6

    move p2, v6

    goto :goto_4

    :pswitch_1
    const-string v8, "2"

    invoke-virtual {p2, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_6

    move p2, v7

    goto :goto_4

    :pswitch_2
    invoke-virtual {p2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_6

    move p2, v3

    goto :goto_4

    :cond_6
    :goto_3
    move p2, v5

    :goto_4
    if-eqz p2, :cond_9

    if-eq p2, v7, :cond_8

    if-eq p2, v6, :cond_7

    goto :goto_5

    :cond_7
    const/4 p2, 0x3

    .line 98
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    goto :goto_5

    .line 95
    :cond_8
    invoke-virtual {v0, v6}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    goto :goto_5

    .line 92
    :cond_9
    invoke-virtual {v0, v7}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    .line 103
    :cond_a
    :goto_5
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_10

    .line 104
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v6

    if-eq v6, v2, :cond_c

    if-eq v6, v1, :cond_b

    goto :goto_6

    :cond_b
    invoke-virtual {p2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_d

    move v3, v7

    goto :goto_7

    :cond_c
    invoke-virtual {p2, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_d

    goto :goto_7

    :cond_d
    :goto_6
    move v3, v5

    :goto_7
    if-eqz v3, :cond_f

    if-eq v3, v7, :cond_e

    goto :goto_8

    .line 109
    :cond_e
    sget-object p2, Lcom/mbridge/msdk/out/MBMultiStateEnum;->negative:Lcom/mbridge/msdk/out/MBMultiStateEnum;

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setCloseButtonState(Lcom/mbridge/msdk/out/MBMultiStateEnum;)V

    goto :goto_8

    .line 106
    :cond_f
    sget-object p2, Lcom/mbridge/msdk/out/MBMultiStateEnum;->positive:Lcom/mbridge/msdk/out/MBMultiStateEnum;

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setCloseButtonState(Lcom/mbridge/msdk/out/MBMultiStateEnum;)V

    .line 114
    :cond_10
    :goto_8
    iget p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    iget p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g:I

    invoke-virtual {v0, p2, p3}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setNativeViewSize(II)V

    .line 116
    new-instance p2, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;

    invoke-direct {p2, p0, v0, p1}, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;Landroid/content/Context;)V

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    .line 169
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_11

    .line 170
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2, p4}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 172
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->load()V

    return-void

    .line 174
    :cond_11
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    const/4 p2, 0x7

    invoke-virtual {p1, p2, p4}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 176
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->loadByToken(Ljava/lang/String;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x31
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZLjava/util/Map;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "ZZ",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 185
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    .line 188
    invoke-static {p2, p3}, Lcom/mbridge/msdk/out/MBNativeHandler;->getNativeProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    const/4 v0, 0x1

    .line 190
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ad_num"

    invoke-interface {p1, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v0, 0x0

    .line 192
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "layout_type"

    .line 191
    invoke-interface {p1, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 198
    invoke-static {p4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p4

    const-string v0, "videoSupport"

    invoke-interface {p1, v0, p4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 203
    iget-object p4, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    const/4 v0, 0x0

    if-eqz p4, :cond_0

    .line 204
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p4

    const/16 v1, 0x8

    invoke-virtual {p4, v1, p6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 206
    new-instance p4, Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-direct {p4, p1, v4}, Lcom/mbridge/msdk/out/MBNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    move-object p1, p4

    move-object p4, v0

    goto :goto_0

    .line 209
    :cond_0
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p4

    const/4 v1, 0x7

    invoke-virtual {p4, v1, p6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 211
    new-instance p4, Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-direct {p4, p1, v4}, Lcom/mbridge/msdk/out/MBBidNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    move-object p1, v0

    .line 216
    :goto_0
    new-instance p6, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;

    move-object v0, p6

    move-object v1, p0

    move-object v2, p1

    move-object v3, p4

    move-object v5, p2

    move-object v6, p3

    move v7, p5

    invoke-direct/range {v0 .. v7}, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeHandler;Lcom/mbridge/msdk/out/MBBidNativeHandler;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    if-eqz p1, :cond_1

    .line 298
    invoke-virtual {p1, p6}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 299
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBNativeHandler;->load()Z

    return-void

    .line 301
    :cond_1
    invoke-virtual {p4, p6}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 302
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-virtual {p4, p1}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidLoad(Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Z)V"
        }
    .end annotation

    move-object/from16 v8, p0

    move-object/from16 v0, p1

    move-object/from16 v1, p2

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 61
    :try_start_0
    sget-object v3, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->IS_AUTO_PLAY_KEY:Ljava/lang/String;

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move v7, v2

    goto :goto_1

    :cond_0
    move v3, v2

    :goto_0
    move v7, v3

    .line 67
    :goto_1
    iget-object v3, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->b:Ljava/lang/String;

    const-string v4, "1"

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    const/16 v5, 0x8

    const/4 v6, 0x7

    const/4 v9, 0x1

    if-eqz v3, :cond_13

    .line 1077
    new-instance v3, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    move-object v7, v0

    check-cast v7, Landroid/app/Activity;

    move-object/from16 v10, p3

    move-object/from16 v11, p4

    invoke-direct {v3, v7, v10, v11}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    .line 1078
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    const-string v10, "0"

    const/16 v11, 0x31

    const/16 v12, 0x30

    const/4 v13, -0x1

    const/4 v14, 0x2

    if-nez v7, :cond_6

    .line 1079
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v15

    if-eq v15, v12, :cond_2

    if-eq v15, v11, :cond_1

    goto :goto_2

    :cond_1
    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    move v7, v9

    goto :goto_3

    :cond_2
    invoke-virtual {v7, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    move v7, v2

    goto :goto_3

    :cond_3
    :goto_2
    move v7, v13

    :goto_3
    if-eqz v7, :cond_5

    if-eq v7, v9, :cond_4

    goto :goto_4

    .line 1084
    :cond_4
    invoke-virtual {v3, v14}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setPlayMuteState(I)V

    goto :goto_4

    .line 1081
    :cond_5
    invoke-virtual {v3, v9}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setPlayMuteState(I)V

    .line 1089
    :cond_6
    :goto_4
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_b

    .line 1090
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v15

    packed-switch v15, :pswitch_data_0

    goto :goto_5

    :pswitch_0
    const-string v15, "3"

    invoke-virtual {v7, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    move v7, v14

    goto :goto_6

    :pswitch_1
    const-string v15, "2"

    invoke-virtual {v7, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    move v7, v9

    goto :goto_6

    :pswitch_2
    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    move v7, v2

    goto :goto_6

    :cond_7
    :goto_5
    move v7, v13

    :goto_6
    if-eqz v7, :cond_a

    if-eq v7, v9, :cond_9

    if-eq v7, v14, :cond_8

    goto :goto_7

    :cond_8
    const/4 v7, 0x3

    .line 1098
    invoke-virtual {v3, v7}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    goto :goto_7

    .line 1095
    :cond_9
    invoke-virtual {v3, v14}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    goto :goto_7

    .line 1092
    :cond_a
    invoke-virtual {v3, v9}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    .line 1103
    :cond_b
    :goto_7
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_11

    .line 1104
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v14

    if-eq v14, v12, :cond_d

    if-eq v14, v11, :cond_c

    goto :goto_8

    :cond_c
    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_e

    move v2, v9

    goto :goto_9

    :cond_d
    invoke-virtual {v7, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_e

    goto :goto_9

    :cond_e
    :goto_8
    move v2, v13

    :goto_9
    if-eqz v2, :cond_10

    if-eq v2, v9, :cond_f

    goto :goto_a

    .line 1109
    :cond_f
    sget-object v2, Lcom/mbridge/msdk/out/MBMultiStateEnum;->negative:Lcom/mbridge/msdk/out/MBMultiStateEnum;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setCloseButtonState(Lcom/mbridge/msdk/out/MBMultiStateEnum;)V

    goto :goto_a

    .line 1106
    :cond_10
    sget-object v2, Lcom/mbridge/msdk/out/MBMultiStateEnum;->positive:Lcom/mbridge/msdk/out/MBMultiStateEnum;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setCloseButtonState(Lcom/mbridge/msdk/out/MBMultiStateEnum;)V

    .line 1114
    :cond_11
    :goto_a
    iget v2, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    iget v4, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g:I

    invoke-virtual {v3, v2, v4}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setNativeViewSize(II)V

    .line 1116
    new-instance v2, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;

    invoke-direct {v2, v8, v3, v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;Landroid/content/Context;)V

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    .line 1169
    iget-object v0, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 1170
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0, v5, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1172
    invoke-virtual {v3}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->load()V

    return-void

    .line 1174
    :cond_12
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0, v6, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1176
    iget-object v0, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-virtual {v3, v0}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->loadByToken(Ljava/lang/String;)V

    return-void

    :cond_13
    move-object/from16 v10, p3

    move-object/from16 v11, p4

    .line 1185
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    .line 1188
    invoke-static/range {p3 .. p4}, Lcom/mbridge/msdk/out/MBNativeHandler;->getNativeProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    .line 1190
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v9, "ad_num"

    invoke-interface {v0, v9, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1192
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "layout_type"

    .line 1191
    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1198
    invoke-static/range {p5 .. p5}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    const-string v3, "videoSupport"

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1203
    iget-object v2, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_14

    .line 1204
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v2

    invoke-virtual {v2, v5, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1206
    new-instance v1, Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-direct {v1, v0, v4}, Lcom/mbridge/msdk/out/MBNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    move-object v12, v1

    move-object v9, v3

    goto :goto_b

    .line 1209
    :cond_14
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v2

    invoke-virtual {v2, v6, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 1211
    new-instance v1, Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-direct {v1, v0, v4}, Lcom/mbridge/msdk/out/MBBidNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    move-object v9, v1

    move-object v12, v3

    .line 1216
    :goto_b
    new-instance v13, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;

    move-object v0, v13

    move-object/from16 v1, p0

    move-object v2, v12

    move-object v3, v9

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    invoke-direct/range {v0 .. v7}, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeHandler;Lcom/mbridge/msdk/out/MBBidNativeHandler;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    if-eqz v12, :cond_15

    .line 1298
    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 1299
    invoke-virtual {v12}, Lcom/mbridge/msdk/out/MBNativeHandler;->load()Z

    return-void

    .line 1301
    :cond_15
    invoke-virtual {v9, v13}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 1302
    iget-object v0, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-virtual {v9, v0}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidLoad(Ljava/lang/String;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x31
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 16

    move-object/from16 v8, p0

    move-object/from16 v0, p1

    move-object/from16 v1, p2

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 2061
    :try_start_0
    sget-object v3, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->IS_AUTO_PLAY_KEY:Ljava/lang/String;

    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move v7, v2

    goto :goto_1

    :cond_0
    move v3, v2

    :goto_0
    move v7, v3

    .line 2067
    :goto_1
    iget-object v3, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->b:Ljava/lang/String;

    const-string v4, "1"

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    const/16 v5, 0x8

    const/4 v6, 0x7

    const/4 v9, 0x1

    if-eqz v3, :cond_13

    .line 2077
    new-instance v3, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    move-object v7, v0

    check-cast v7, Landroid/app/Activity;

    move-object/from16 v10, p3

    move-object/from16 v11, p4

    invoke-direct {v3, v7, v10, v11}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    .line 2078
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    const-string v10, "0"

    const/16 v11, 0x31

    const/16 v12, 0x30

    const/4 v13, -0x1

    const/4 v14, 0x2

    if-nez v7, :cond_6

    .line 2079
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v15

    if-eq v15, v12, :cond_2

    if-eq v15, v11, :cond_1

    goto :goto_2

    :cond_1
    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    move v7, v9

    goto :goto_3

    :cond_2
    invoke-virtual {v7, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    move v7, v2

    goto :goto_3

    :cond_3
    :goto_2
    move v7, v13

    :goto_3
    if-eqz v7, :cond_5

    if-eq v7, v9, :cond_4

    goto :goto_4

    .line 2084
    :cond_4
    invoke-virtual {v3, v14}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setPlayMuteState(I)V

    goto :goto_4

    .line 2081
    :cond_5
    invoke-virtual {v3, v9}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setPlayMuteState(I)V

    .line 2089
    :cond_6
    :goto_4
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_b

    .line 2090
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v15

    packed-switch v15, :pswitch_data_0

    goto :goto_5

    :pswitch_0
    const-string v15, "3"

    invoke-virtual {v7, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    move v7, v14

    goto :goto_6

    :pswitch_1
    const-string v15, "2"

    invoke-virtual {v7, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    move v7, v9

    goto :goto_6

    :pswitch_2
    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_7

    move v7, v2

    goto :goto_6

    :cond_7
    :goto_5
    move v7, v13

    :goto_6
    if-eqz v7, :cond_a

    if-eq v7, v9, :cond_9

    if-eq v7, v14, :cond_8

    goto :goto_7

    :cond_8
    const/4 v7, 0x3

    .line 2098
    invoke-virtual {v3, v7}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    goto :goto_7

    .line 2095
    :cond_9
    invoke-virtual {v3, v14}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    goto :goto_7

    .line 2092
    :cond_a
    invoke-virtual {v3, v9}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->autoLoopPlay(I)V

    .line 2103
    :cond_b
    :goto_7
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_11

    .line 2104
    iget-object v7, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v14

    if-eq v14, v12, :cond_d

    if-eq v14, v11, :cond_c

    goto :goto_8

    :cond_c
    invoke-virtual {v7, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_e

    move v2, v9

    goto :goto_9

    :cond_d
    invoke-virtual {v7, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_e

    goto :goto_9

    :cond_e
    :goto_8
    move v2, v13

    :goto_9
    if-eqz v2, :cond_10

    if-eq v2, v9, :cond_f

    goto :goto_a

    .line 2109
    :cond_f
    sget-object v2, Lcom/mbridge/msdk/out/MBMultiStateEnum;->negative:Lcom/mbridge/msdk/out/MBMultiStateEnum;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setCloseButtonState(Lcom/mbridge/msdk/out/MBMultiStateEnum;)V

    goto :goto_a

    .line 2106
    :cond_10
    sget-object v2, Lcom/mbridge/msdk/out/MBMultiStateEnum;->positive:Lcom/mbridge/msdk/out/MBMultiStateEnum;

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setCloseButtonState(Lcom/mbridge/msdk/out/MBMultiStateEnum;)V

    .line 2114
    :cond_11
    :goto_a
    iget v2, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    iget v4, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g:I

    invoke-virtual {v3, v2, v4}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setNativeViewSize(II)V

    .line 2116
    new-instance v2, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;

    invoke-direct {v2, v8, v3, v0}, Lcom/tkay/network/mintegral/MintegralTYAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;Landroid/content/Context;)V

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    .line 2169
    iget-object v0, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 2170
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0, v5, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 2172
    invoke-virtual {v3}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->load()V

    return-void

    .line 2174
    :cond_12
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0, v6, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 2176
    iget-object v0, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-virtual {v3, v0}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->loadByToken(Ljava/lang/String;)V

    return-void

    :cond_13
    move-object/from16 v10, p3

    move-object/from16 v11, p4

    .line 2185
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    .line 2188
    invoke-static/range {p3 .. p4}, Lcom/mbridge/msdk/out/MBNativeHandler;->getNativeProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    .line 2190
    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const-string v9, "ad_num"

    invoke-interface {v0, v9, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2192
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "layout_type"

    .line 2191
    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2198
    invoke-static/range {p5 .. p5}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    const-string v3, "videoSupport"

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2203
    iget-object v2, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_14

    .line 2204
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v2

    invoke-virtual {v2, v5, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 2206
    new-instance v1, Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-direct {v1, v0, v4}, Lcom/mbridge/msdk/out/MBNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    move-object v12, v1

    move-object v9, v3

    goto :goto_b

    .line 2209
    :cond_14
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v2

    invoke-virtual {v2, v6, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 2211
    new-instance v1, Lcom/mbridge/msdk/out/MBBidNativeHandler;

    invoke-direct {v1, v0, v4}, Lcom/mbridge/msdk/out/MBBidNativeHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    move-object v9, v1

    move-object v12, v3

    .line 2216
    :goto_b
    new-instance v13, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;

    move-object v0, v13

    move-object/from16 v1, p0

    move-object v2, v12

    move-object v3, v9

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    invoke-direct/range {v0 .. v7}, Lcom/tkay/network/mintegral/MintegralTYAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Lcom/mbridge/msdk/out/MBNativeHandler;Lcom/mbridge/msdk/out/MBBidNativeHandler;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    if-eqz v12, :cond_15

    .line 2298
    invoke-virtual {v12, v13}, Lcom/mbridge/msdk/out/MBNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 2299
    invoke-virtual {v12}, Lcom/mbridge/msdk/out/MBNativeHandler;->load()Z

    return-void

    .line 2301
    :cond_15
    invoke-virtual {v9, v13}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    .line 2302
    iget-object v0, v8, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    invoke-virtual {v9, v0}, Lcom/mbridge/msdk/out/MBBidNativeHandler;->bidLoad(Ljava/lang/String;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x31
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/mintegral/MintegralTYAdapter;)I
    .locals 0

    .line 42
    iget p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mRequestNum:I

    return p0
.end method

.method static synthetic n(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/mintegral/MintegralTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 0

    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string v0, "unitid"

    .line 406
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->h:Ljava/lang/String;

    .line 407
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v1

    const/4 v5, 0x0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 396
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 308
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 386
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->h:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 391
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "suport_video"

    const-string v1, ""

    :try_start_0
    const-string v2, "appid"

    .line 314
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "unitid"

    .line 315
    invoke-static {p2, v3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "appkey"

    .line 316
    invoke-static {p2, v4}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "placement_id"

    .line 317
    invoke-static {p2, v5}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    const-string v5, "payload"

    .line 322
    invoke-static {p2, v5}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->a:Ljava/lang/String;

    const-string v5, "unit_type"

    .line 323
    invoke-static {p2, v5}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->b:Ljava/lang/String;

    const-string v5, "video_muted"

    .line 324
    invoke-static {p2, v5}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->c:Ljava/lang/String;

    const-string v5, "video_autoplay"

    .line 325
    invoke-static {p2, v5}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->d:Ljava/lang/String;

    const-string v5, "close_button"

    .line 326
    invoke-static {p2, v5}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->e:Ljava/lang/String;

    .line 328
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    .line 335
    :cond_0
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    const/4 v4, 0x0

    if-eqz v2, :cond_1

    .line 336
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "1"

    .line 337
    invoke-virtual {v2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    move v11, v0

    goto :goto_0

    :cond_1
    move v11, v4

    :goto_0
    const-string v0, "key_width"

    .line 344
    invoke-static {p3, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    const-string v0, "key_height"

    .line 345
    invoke-static {p3, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result p3

    iput p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g:I

    .line 347
    iget p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    if-nez p3, :cond_2

    .line 348
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget p3, p3, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {p3, v0}, Ljava/lang/Math;->min(II)I

    move-result p3

    iput p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    .line 350
    :cond_2
    iget p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g:I

    if-nez p3, :cond_3

    .line 351
    iget p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->f:I

    mul-int/lit8 p3, p3, 0x3

    div-int/lit8 p3, p3, 0x4

    iput p3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->g:I

    .line 354
    :cond_3
    iput-object v3, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->h:Ljava/lang/String;

    .line 358
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;

    move-object v6, v0

    move-object v7, p0

    move-object v8, p1

    move-object v9, p2

    invoke-direct/range {v6 .. v11}, Lcom/tkay/network/mintegral/MintegralTYAdapter$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/lang/String;Z)V

    invoke-virtual {p3, p1, p2, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    .line 329
    :cond_4
    :goto_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_5

    .line 330
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    const-string p2, "mintegral appid ,unitid or sdkkey is empty."

    invoke-interface {p1, v1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_5
    return-void

    :catch_0
    move-exception p1

    .line 373
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p2, :cond_6

    .line 374
    iget-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v1, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    return-void
.end method
