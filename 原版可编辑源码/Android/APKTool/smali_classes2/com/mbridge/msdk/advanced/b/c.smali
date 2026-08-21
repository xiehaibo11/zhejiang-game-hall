.class public final Lcom/mbridge/msdk/advanced/b/c;
.super Ljava/lang/Object;
.source "ResManager.java"


# static fields
.field public static a:Lcom/mbridge/msdk/foundation/db/f; = null

.field private static b:Ljava/lang/String; = "ResManager"

.field private static c:I = 0x1


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 42
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 41
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZZ)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 20

    move-object/from16 v6, p0

    move-object/from16 v3, p2

    .line 54
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 56
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 58
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->ag()J

    move-result-wide v1

    const-wide/16 v4, 0x3e8

    mul-long v7, v1, v4

    .line 59
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v0

    mul-long v9, v0, v4

    .line 1378
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    if-nez v0, :cond_1

    .line 1379
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    .line 1381
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    invoke-virtual {v0, v9, v10, v3}, Lcom/mbridge/msdk/foundation/db/f;->b(JLjava/lang/String;)V

    .line 2111
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    if-nez v0, :cond_2

    .line 2112
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    .line 2114
    :cond_2
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    sget v1, Lcom/mbridge/msdk/advanced/b/c;->c:I

    const/4 v2, 0x0

    invoke-virtual {v0, v3, v2, v2, v1}, Lcom/mbridge/msdk/foundation/db/f;->b(Ljava/lang/String;III)Ljava/util/List;

    move-result-object v0

    const/4 v11, 0x0

    if-eqz v0, :cond_c

    .line 65
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_c

    .line 66
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v12, v0

    check-cast v12, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 67
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    return-object v11

    .line 71
    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v13, v0, v7

    const/16 v15, 0x8

    const-string v2, "cache campain is picked:"

    const-wide/16 v16, 0x0

    if-nez p5, :cond_7

    .line 74
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v18

    cmp-long v18, v18, v16

    if-lez v18, :cond_4

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v18

    mul-long v18, v18, v4

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v4

    add-long v18, v18, v4

    cmp-long v0, v18, v0

    if-gez v0, :cond_5

    .line 75
    :cond_4
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v0

    cmp-long v0, v0, v16

    if-gtz v0, :cond_6

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v0

    cmp-long v0, v0, v13

    if-ltz v0, :cond_6

    :cond_5
    move-object/from16 v0, p0

    move-object v1, v12

    move-object v6, v2

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move/from16 v4, p4

    move/from16 v5, p6

    .line 76
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;IZ)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 77
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    invoke-static {v12}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v11

    goto/16 :goto_0

    .line 81
    :cond_6
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    const-string v1, "========\u5df2\u7ecf\u8d85\u4e86\u7f13\u5b58\u65f6\u95f4"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 83
    invoke-virtual {v12, v7, v8, v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result v0

    if-nez v0, :cond_c

    if-eqz v6, :cond_c

    .line 84
    invoke-virtual {v6, v15}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVisibility(I)V

    goto/16 :goto_0

    .line 88
    :cond_7
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v18

    cmp-long v18, v18, v16

    if-lez v18, :cond_8

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v18

    mul-long v18, v18, v4

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v4

    add-long v18, v18, v4

    cmp-long v0, v18, v0

    if-gez v0, :cond_9

    .line 89
    :cond_8
    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlct()J

    move-result-wide v0

    cmp-long v0, v0, v16

    if-gtz v0, :cond_a

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTimestamp()J

    move-result-wide v0

    cmp-long v0, v0, v13

    if-ltz v0, :cond_a

    :cond_9
    move-object/from16 v0, p0

    move-object v1, v12

    move-object v6, v2

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move/from16 v4, p4

    move/from16 v5, p6

    .line 90
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;IZ)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 91
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 92
    invoke-static {v12}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v11

    goto :goto_0

    :cond_a
    move-object/from16 v0, p0

    move-object v1, v12

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move/from16 v4, p4

    move/from16 v5, p6

    .line 95
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;IZ)Z

    move-result v0

    if-eqz v0, :cond_b

    invoke-virtual {v12, v7, v8, v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 96
    invoke-static {v12}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v11

    goto :goto_0

    .line 98
    :cond_b
    invoke-virtual {v12, v7, v8, v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result v0

    if-nez v0, :cond_c

    if-eqz v6, :cond_c

    .line 99
    invoke-virtual {v6, v15}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVisibility(I)V

    :cond_c
    :goto_0
    return-object v11
.end method

.method private static a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 4

    .line 118
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    const-string v3, "<MBTPLMARK>"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 122
    :cond_0
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    .line 123
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    goto :goto_1

    .line 119
    :cond_1
    :goto_0
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasMBTplMark(Z)V

    .line 120
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsMraid(Z)V

    :goto_1
    return-object p0
.end method

.method private static a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 10

    if-eqz p0, :cond_1

    .line 245
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 246
    invoke-static {}, Lcom/mbridge/msdk/advanced/common/c;->a()Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->d(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->g(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {v0, p4}, Lcom/mbridge/msdk/advanced/common/c;->b(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/common/c;->a(Z)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    .line 247
    invoke-static {v0, p4}, Lcom/mbridge/msdk/advanced/d/a;->a(Lcom/mbridge/msdk/advanced/common/c;Ljava/lang/String;)V

    .line 248
    new-instance v0, Lcom/mbridge/msdk/advanced/js/a;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1, p3, p4}, Lcom/mbridge/msdk/advanced/js/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 250
    invoke-interface {v1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 251
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/js/a;->a(Ljava/util/List;)V

    .line 252
    invoke-virtual {v0, p5}, Lcom/mbridge/msdk/advanced/js/a;->a(I)V

    .line 253
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/mbridge/msdk/advanced/js/a;)V

    .line 254
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object p5

    .line 255
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    .line 256
    new-instance v9, Lcom/mbridge/msdk/advanced/b/c$1;

    move-object v0, v9

    move-object v1, p3

    move-object v2, p4

    move-object v3, p2

    move-object v4, p0

    move-wide v5, v7

    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/b/c$1;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;J)V

    invoke-virtual {p5, v9}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 301
    invoke-virtual {p5}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->isDestoryed()Z

    move-result p3

    if-nez p3, :cond_0

    .line 302
    sget-object p0, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "======\u5f00\u59cb\u6e32\u67d3\uff1a"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    new-instance p0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 304
    new-instance p2, Lcom/mbridge/msdk/advanced/b/c$2;

    invoke-direct {p2, p5, p1}, Lcom/mbridge/msdk/advanced/b/c$2;-><init>(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;Ljava/lang/String;)V

    invoke-virtual {p0, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 311
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    .line 312
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const/4 v6, 0x3

    const-string v3, "webview had destory"

    move-object v1, p2

    move-object v2, p4

    move-wide v4, v7

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;JI)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    .locals 1

    .line 369
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 370
    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 371
    sget-object p0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    if-nez p0, :cond_0

    .line 372
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    .line 374
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/foundation/db/f;->b(Ljava/util/List;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 3

    .line 385
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    if-nez v0, :cond_0

    .line 386
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    .line 388
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/advanced/b/c;->a:Lcom/mbridge/msdk/foundation/db/f;

    const/4 v1, 0x0

    sget v2, Lcom/mbridge/msdk/advanced/b/c;->c:I

    invoke-virtual {v0, p0, v1, v2}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;II)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5

    const/4 v0, 0x0

    if-nez p0, :cond_0

    .line 339
    sget-object p0, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    const-string p1, "mbAdvancedNativeView  is null"

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v0

    :cond_0
    const/4 v1, 0x1

    .line 343
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 344
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->isVideoReady()Z

    move-result v1

    .line 345
    sget-object v2, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "======isReady isVideoReady:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    if-eqz v1, :cond_2

    .line 347
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 348
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/common/b;->a(Ljava/lang/String;)Z

    move-result v1

    .line 349
    sget-object v2, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "======isReady getAdZip:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    if-eqz v1, :cond_3

    .line 351
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 352
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/common/b;->a(Ljava/lang/String;)Z

    move-result v1

    .line 353
    sget-object p2, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "======isReady getAdHtml:"

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 356
    :cond_3
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 358
    sget-object p2, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    const-string p3, "======isReady getAdHtml  getAdZip all are empty"

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    move v0, v1

    :goto_0
    if-eqz v0, :cond_5

    .line 360
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 361
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->isEndCardReady()Z

    move-result v0

    .line 362
    sget-object p0, Lcom/mbridge/msdk/advanced/b/c;->b:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "======isReady isEndCardReady:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    return v0
.end method

.method private static a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;IZ)Z
    .locals 12

    move-object v6, p0

    move-object v7, p2

    move-object v8, p3

    const/4 v9, 0x0

    if-eqz p1, :cond_9

    .line 160
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->clearResState()V

    .line 161
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v10, 0x1

    if-nez v0, :cond_0

    .line 163
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    const/16 v1, 0x12a

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    invoke-virtual {v0, v1, p3, v2}, Lcom/mbridge/msdk/videocommon/download/b;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_0
    move v0, v10

    .line 168
    :goto_0
    invoke-virtual {p0, v10}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVideoReady(Z)V

    :cond_1
    move v11, v0

    .line 171
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->isEndCardReady()Z

    move-result v0

    if-nez v0, :cond_2

    .line 172
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 173
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 174
    invoke-virtual {p0, v10}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setEndCardReady(Z)V

    .line 178
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->isH5Ready()Z

    move-result v0

    if-nez v0, :cond_5

    .line 179
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 180
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 181
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/common/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 182
    invoke-virtual {p0, v10}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    goto :goto_1

    :cond_3
    move-object v0, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move/from16 v5, p4

    .line 184
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;I)V

    if-nez p5, :cond_5

    :cond_4
    move v11, v9

    .line 194
    :cond_5
    :goto_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->isH5Ready()Z

    move-result v0

    if-nez v0, :cond_8

    .line 195
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdHtml()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 196
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 197
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/common/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 198
    invoke-virtual {p0, v10}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setH5Ready(Z)V

    .line 199
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 200
    invoke-virtual {p0, v10}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVideoReady(Z)V

    :cond_6
    move v9, v10

    goto :goto_2

    :cond_7
    move-object v0, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move/from16 v5, p4

    .line 204
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/advanced/b/c;->a(Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;I)V

    if-nez p5, :cond_8

    goto :goto_2

    :cond_8
    move v9, v11

    :cond_9
    :goto_2
    return v9
.end method

.method private static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 322
    :try_start_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 323
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 324
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "file:///"

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 330
    :try_start_1
    throw p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-exception p0

    .line 332
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-object v0
.end method
