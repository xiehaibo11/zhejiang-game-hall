.class public Lcom/mbridge/msdk/foundation/entity/CampaignUnit;
.super Ljava/lang/Object;
.source "CampaignUnit.java"

# interfaces
.implements Lcom/mbridge/msdk/system/NoProGuard;
.implements Ljava/io/Serializable;


# static fields
.field public static final JSON_KEY_ADS:Ljava/lang/String; = "ads"

.field public static final JSON_KEY_AD_HTML:Ljava/lang/String; = "cam_html"

.field public static final JSON_KEY_AD_TYPE:Ljava/lang/String; = "ad_type"

.field public static final JSON_KEY_AD_ZIP:Ljava/lang/String; = "cam_tpl_url"

.field public static final JSON_KEY_BANNER_HTML:Ljava/lang/String; = "cam_html"

.field public static final JSON_KEY_BANNER_URL:Ljava/lang/String; = "cam_tpl_url"

.field public static final JSON_KEY_CSP:Ljava/lang/String; = "csp"

.field public static final JSON_KEY_DO:Ljava/lang/String; = "do"

.field public static final JSON_KEY_ENCRYPT_PRICE:Ljava/lang/String; = "encrypt_p"

.field public static final JSON_KEY_END_SCREEN_URL:Ljava/lang/String; = "end_screen_url"

.field public static final JSON_KEY_FRAME_ADS:Ljava/lang/String; = "frames"

.field public static final JSON_KEY_HTML_URL:Ljava/lang/String; = "html_url"

.field public static final JSON_KEY_IA_EXT1:Ljava/lang/String; = "ia_all_ext1"

.field public static final JSON_KEY_IA_EXT2:Ljava/lang/String; = "ia_all_ext2"

.field public static final JSON_KEY_IA_ICON:Ljava/lang/String; = "ia_icon"

.field public static final JSON_KEY_IA_ORI:Ljava/lang/String; = "ia_ori"

.field public static final JSON_KEY_IA_RST:Ljava/lang/String; = "ia_rst"

.field public static final JSON_KEY_IA_URL:Ljava/lang/String; = "ia_url"

.field public static final JSON_KEY_JM_DO:Ljava/lang/String; = "jm_do"

.field public static final JSON_KEY_MOF_TEMPLATE_URL:Ljava/lang/String; = "mof_template_url"

.field public static final JSON_KEY_MOF_TPLID:Ljava/lang/String; = "mof_tplid"

.field public static final JSON_KEY_NSCPT:Ljava/lang/String; = "nscpt"

.field public static final JSON_KEY_ONLY_IMPRESSION_URL:Ljava/lang/String; = "only_impression_url"

.field public static final JSON_KEY_PARENT_SESSION_ID:Ljava/lang/String; = "parent_session_id"

.field public static final JSON_KEY_PV_URLS:Ljava/lang/String; = "pv_urls"

.field public static final JSON_KEY_REPLACE_TMP:Ljava/lang/String; = "replace_tmp"

.field public static final JSON_KEY_REQ_EXT_DATA:Ljava/lang/String; = "req_ext_data"

.field public static final JSON_KEY_RKS:Ljava/lang/String; = "rks"

.field public static final JSON_KEY_SESSION_ID:Ljava/lang/String; = "a"

.field public static final JSON_KEY_SH:Ljava/lang/String; = "sh"

.field public static final JSON_KEY_TEMPLATE:Ljava/lang/String; = "template"

.field public static final JSON_KEY_TOKEN_RULE:Ljava/lang/String; = "token_r"

.field public static final JSON_KEY_UNIT_SIZE:Ljava/lang/String; = "unit_size"

.field public static final JSON_KEY_VCN:Ljava/lang/String; = "vcn"

.field public static final KEY_IRLFA:Ljava/lang/String; = "irlfa"

.field private static final TAG:Ljava/lang/String;

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private adHtml:Ljava/lang/String;

.field private adType:I

.field private adZip:Ljava/lang/String;

.field public ads:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private bannerHtml:Ljava/lang/String;

.field private bannerUrl:Ljava/lang/String;

.field private cParams:Ljava/lang/StringBuffer;

.field private csp:Ljava/lang/String;

.field private domain:Ljava/lang/String;

.field private encryptPrice:Ljava/lang/String;

.field private epMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private htmlUrl:Ljava/lang/String;

.field private ia_all_ext1:Ljava/lang/String;

.field private ia_all_ext2:Ljava/lang/String;

.field private ia_icon:Ljava/lang/String;

.field private ia_ori:I

.field private ia_rst:I

.field private ia_url:Ljava/lang/String;

.field private jmDo:I

.field private listFrames:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;"
        }
    .end annotation
.end field

.field private msg:Ljava/lang/String;

.field private onlyImpressionUrl:Ljava/lang/String;

.field private parentSessionId:Ljava/lang/String;

.field private requestId:Ljava/lang/String;

.field private rks:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private sessionId:Ljava/lang/String;

.field private sh:Ljava/lang/String;

.field private template:I

.field private tokenRule:I

.field private unitSize:Ljava/lang/String;

.field private vcn:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 66
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->msg:Ljava/lang/String;

    .line 214
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->cParams:Ljava/lang/StringBuffer;

    .line 238
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->encryptPrice:Ljava/lang/String;

    return-void
.end method

.method private static getSysIDAndBKUPID(Lorg/json/JSONObject;)V
    .locals 9

    .line 489
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "H+tU+FeXHM=="

    if-eqz v0, :cond_0

    .line 491
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v3, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v3, v4}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    const-string v0, "H+tU+Fz8"

    const-string v3, "H+tU+bfPhM=="

    const-string v4, "c"

    const-string v5, "b"

    if-eqz v1, :cond_2

    .line 499
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    if-eqz p0, :cond_4

    if-eqz v2, :cond_4

    .line 501
    invoke-virtual {p0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 502
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_1

    sget-object v6, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v6, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_1

    .line 503
    sput-object v2, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 504
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v2

    sget-object v6, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {v2, v5, v6}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    .line 506
    :try_start_2
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sget-object v3, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/FastKV;->putString(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 511
    :catch_1
    :cond_1
    :try_start_3
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 512
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v2, p0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 513
    sput-object p0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 514
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p0

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {p0, v4, v2}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    .line 516
    :try_start_4
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {v1, p0, v0}, Lcom/mbridge/msdk/foundation/tools/FastKV;->putString(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto/16 :goto_0

    :catch_2
    move-exception p0

    .line 523
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    goto/16 :goto_0

    .line 527
    :cond_2
    :try_start_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-eqz p0, :cond_4

    if-eqz v1, :cond_4

    .line 529
    invoke-virtual {p0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 530
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    const/4 v8, 0x0

    if-nez v7, :cond_3

    sget-object v7, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v7, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_3

    .line 531
    sput-object v6, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 532
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v6

    sget-object v7, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {v6, v5, v7}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 533
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5, v8}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v5

    if-eqz v5, :cond_3

    .line 535
    invoke-interface {v5}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    .line 536
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sget-object v6, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-interface {v5, v3, v6}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 537
    invoke-interface {v5}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 540
    :cond_3
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 541
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    sget-object v3, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v3, p0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 542
    sput-object p0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 543
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p0

    sget-object v3, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {p0, v4, v3}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 545
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 544
    invoke-virtual {v1, p0, v8}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    if-eqz p0, :cond_4

    .line 547
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    .line 548
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-interface {p0, v0, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 549
    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_0

    :catch_3
    move-exception p0

    .line 554
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :catch_4
    :cond_4
    :goto_0
    return-void
.end method

.method private nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    if-nez p1, :cond_0

    const-string p1, ""

    :cond_0
    return-object p1
.end method

.method public static parseCampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;
    .locals 1

    const-string v0, ""

    .line 454
    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseCampaignUnit(Lorg/json/JSONObject;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object p0

    return-object p0
.end method

.method public static parseCampaignUnit(Lorg/json/JSONObject;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;
    .locals 37

    move-object/from16 v0, p0

    const-string v1, "ads"

    const-string v2, "template"

    const-string v3, "ad_type"

    const-string v4, "parent_session_id"

    const-string v5, "a"

    const-string v6, "only_impression_url"

    const-string v7, "html_url"

    if-eqz v0, :cond_d

    .line 572
    :try_start_0
    new-instance v15, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-direct {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_b

    :try_start_1
    const-string v9, "rks"

    .line 573
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 574
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_9

    if-nez v10, :cond_1

    .line 575
    :try_start_2
    new-instance v10, Lorg/json/JSONObject;

    invoke-direct {v10, v9}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 576
    invoke-virtual {v10}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v9

    .line 577
    new-instance v11, Ljava/util/HashMap;

    invoke-direct {v11}, Ljava/util/HashMap;-><init>()V

    :goto_0
    if-eqz v9, :cond_0

    .line 578
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v12

    if-eqz v12, :cond_0

    .line 579
    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/String;

    .line 580
    invoke-virtual {v10, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 581
    invoke-virtual {v11, v12, v13}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 583
    :cond_0
    invoke-virtual {v15, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setRks(Ljava/util/HashMap;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-object v8, v15

    goto/16 :goto_c

    .line 586
    :cond_1
    :goto_1
    :try_start_3
    invoke-static/range {p1 .. p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_9

    const-string v10, "encrypt_p"

    const-string v11, ""

    if-nez v9, :cond_2

    .line 587
    :try_start_4
    new-instance v9, Ljava/util/HashMap;

    invoke-direct {v9}, Ljava/util/HashMap;-><init>()V

    .line 588
    invoke-virtual {v9, v10, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v12, "irlfa"

    .line 589
    invoke-virtual {v9, v12, v11}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 590
    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setEpMap(Ljava/util/HashMap;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    :cond_2
    :try_start_5
    const-string v9, "req_ext_data"

    .line 594
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v9

    const-string v12, "nscpt"

    const/4 v13, 0x1

    .line 596
    invoke-virtual {v0, v12, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v14

    const-string v12, "mof_template_url"

    .line 597
    invoke-virtual {v0, v12, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    const-string v8, "mof_tplid"

    const/4 v13, 0x0

    .line 598
    invoke-virtual {v0, v8, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_9

    if-eqz v9, :cond_3

    .line 601
    :try_start_6
    invoke-virtual {v9}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v11
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0

    .line 605
    :cond_3
    :try_start_7
    new-instance v9, Lorg/json/JSONArray;

    invoke-direct {v9}, Lorg/json/JSONArray;-><init>()V

    const-string v9, "pv_urls"

    .line 606
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v9
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_9

    if-eqz v9, :cond_4

    .line 608
    :try_start_8
    invoke-virtual {v9}, Lorg/json/JSONArray;->length()I

    move-result v18

    if-lez v18, :cond_4

    .line 609
    new-instance v13, Ljava/util/ArrayList;

    move-object/from16 v19, v11

    invoke-virtual {v9}, Lorg/json/JSONArray;->length()I

    move-result v11

    invoke-direct {v13, v11}, Ljava/util/ArrayList;-><init>(I)V

    move-object/from16 v20, v12

    const/4 v11, 0x0

    .line 610
    :goto_2
    invoke-virtual {v9}, Lorg/json/JSONArray;->length()I

    move-result v12

    if-ge v11, v12, :cond_5

    .line 611
    invoke-virtual {v9, v11}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v12

    invoke-interface {v13, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0

    add-int/lit8 v11, v11, 0x1

    goto :goto_2

    :cond_4
    move-object/from16 v19, v11

    move-object/from16 v20, v12

    const/4 v13, 0x0

    :cond_5
    :try_start_9
    const-string v9, "replace_tmp"

    .line 616
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v9

    .line 617
    invoke-static {}, Lcom/mbridge/msdk/foundation/db/a/a;->a()Lcom/mbridge/msdk/foundation/db/a/a;

    move-result-object v11

    const/4 v12, 0x1

    invoke-virtual {v11, v9, v12}, Lcom/mbridge/msdk/foundation/db/a/a;->a(Lorg/json/JSONObject;Z)V

    .line 619
    invoke-static/range {p0 .. p0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSysIDAndBKUPID(Lorg/json/JSONObject;)V

    .line 621
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setSessionId(Ljava/lang/String;)V

    .line 622
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setParentSessionId(Ljava/lang/String;)V

    .line 623
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setAdType(I)V

    const-string v9, "unit_size"

    .line 624
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setUnitSize(Ljava/lang/String;)V

    .line 625
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setHtmlUrl(Ljava/lang/String;)V

    .line 626
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setOnlyImpressionUrl(Ljava/lang/String;)V

    .line 627
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setTemplate(I)V

    const-string v9, "jm_do"

    .line 628
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setJmDo(I)V

    const-string v9, "ia_icon"

    .line 629
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setIa_icon(Ljava/lang/String;)V

    const-string v9, "ia_rst"

    .line 630
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setIa_rst(I)V

    const-string v9, "ia_url"

    .line 631
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setIa_url(Ljava/lang/String;)V

    const-string v9, "ia_ori"

    .line 632
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setIa_ori(I)V

    const-string v9, "ia_all_ext1"

    .line 633
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setIa_all_ext1(Ljava/lang/String;)V

    const-string v9, "ia_all_ext2"

    .line 634
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setIa_all_ext2(Ljava/lang/String;)V

    const-string v9, "vcn"

    .line 635
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setVcn(I)V

    const-string v9, "token_r"

    .line 636
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setTokenRule(I)V

    .line 637
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setEncryptPrice(Ljava/lang/String;)V

    .line 640
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v12

    const-string v9, "frames"

    .line 641
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v11
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_9

    const-string v10, "parse campaign error ,campaign is null"

    const-string v9, "end_screen_url"

    if-eqz v11, :cond_9

    .line 642
    :try_start_a
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v16

    if-lez v16, :cond_9

    .line 643
    new-instance v12, Ljava/util/ArrayList;

    invoke-direct {v12}, Ljava/util/ArrayList;-><init>()V

    move-object/from16 v17, v10

    move-object/from16 v16, v13

    const/4 v13, 0x0

    .line 644
    :goto_3
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v10

    if-ge v13, v10, :cond_8

    .line 645
    invoke-virtual {v11, v13}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v10

    move/from16 v21, v13

    .line 646
    invoke-virtual {v10, v1}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v13

    move-object/from16 v22, v1

    .line 647
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    move-object/from16 v23, v2

    move-object/from16 v24, v10

    const/4 v2, 0x0

    .line 648
    :goto_4
    invoke-virtual {v13}, Lorg/json/JSONArray;->length()I

    move-result v10

    if-ge v2, v10, :cond_7

    .line 649
    invoke-virtual {v13, v2}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v10

    .line 650
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v25

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v26

    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v27
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_3

    const/16 v28, 0x0

    move-object/from16 v29, v9

    move-object v9, v10

    move-object/from16 v31, v17

    move-object/from16 v30, v24

    move-object/from16 v10, v25

    move-object/from16 v17, v11

    move-object/from16 v32, v19

    move-object/from16 v11, v26

    move-object/from16 v19, v7

    move-object/from16 v7, v20

    move-object/from16 v20, v6

    move-object v6, v12

    move-object/from16 v12, v27

    move-object/from16 v24, v6

    move-object/from16 v6, v16

    move/from16 v18, v21

    const/16 v16, 0x0

    move-object/from16 v21, v13

    move/from16 v13, v28

    move/from16 v33, v14

    move-object v14, v15

    move-object/from16 v25, v15

    move-object/from16 v15, p1

    :try_start_b
    invoke-static/range {v9 .. v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaign(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/foundation/entity/CampaignUnit;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v9
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_2

    if-eqz v9, :cond_6

    .line 652
    :try_start_c
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getIa_url()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaUrl(Ljava/lang/String;)V

    .line 653
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getIa_ori()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaOri(I)V

    .line 654
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getIa_rst()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaRst(I)V

    .line 655
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getIa_icon()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setKeyIaIcon(Ljava/lang/String;)V

    .line 656
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setAdType(I)V

    const-string v10, "ia_ext1"

    .line 657
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIa_ext1(Ljava/lang/String;)V

    const-string v10, "ia_ext2"

    .line 658
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIa_ext2(Ljava/lang/String;)V

    .line 659
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getVcn()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVcn(I)V

    .line 660
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getTokenRule()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTokenRule(I)V

    .line 661
    invoke-virtual/range {v25 .. v25}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getEncryptPrice()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEncryptPrice(Ljava/lang/String;)V

    .line 662
    invoke-virtual {v9, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_tplid(I)V

    .line 663
    invoke-virtual {v9, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_template_url(Ljava/lang/String;)V

    move/from16 v15, v33

    .line 664
    invoke-virtual {v9, v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNscpt(I)V

    .line 665
    invoke-virtual {v9, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPv_urls(Ljava/util/List;)V

    move-object/from16 v14, v32

    .line 666
    invoke-virtual {v9, v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReq_ext_data(Ljava/lang/String;)V

    .line 667
    invoke-virtual {v1, v9}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_1

    move-object/from16 v13, v25

    move-object/from16 v11, v31

    goto :goto_5

    :catch_1
    move-object/from16 v8, v25

    goto/16 :goto_c

    :cond_6
    move-object/from16 v14, v32

    move/from16 v15, v33

    move-object/from16 v13, v25

    move-object/from16 v11, v31

    .line 669
    :try_start_d
    invoke-virtual {v13, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setMsg(Ljava/lang/String;)V

    :goto_5
    add-int/lit8 v2, v2, 0x1

    move-object/from16 v16, v6

    move-object/from16 v6, v20

    move-object/from16 v12, v24

    move-object/from16 v9, v29

    move-object/from16 v24, v30

    move-object/from16 v20, v7

    move-object/from16 v7, v19

    move-object/from16 v19, v14

    move v14, v15

    move-object v15, v13

    move-object/from16 v13, v21

    move/from16 v21, v18

    move-object/from16 v36, v17

    move-object/from16 v17, v11

    move-object/from16 v11, v36

    goto/16 :goto_4

    :catch_2
    move-object/from16 v13, v25

    goto/16 :goto_6

    :cond_7
    move-object/from16 v29, v9

    move-object v13, v15

    move/from16 v18, v21

    move-object/from16 v30, v24

    move-object/from16 v24, v12

    move v15, v14

    move-object/from16 v14, v19

    move-object/from16 v19, v7

    move-object/from16 v7, v20

    move-object/from16 v20, v6

    move-object/from16 v6, v16

    const/16 v16, 0x0

    move-object/from16 v36, v17

    move-object/from16 v17, v11

    move-object/from16 v11, v36

    .line 672
    new-instance v2, Lcom/mbridge/msdk/out/Frame;

    invoke-direct {v2}, Lcom/mbridge/msdk/out/Frame;-><init>()V

    .line 673
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v2, v9}, Lcom/mbridge/msdk/out/Frame;->setParentSessionId(Ljava/lang/String;)V

    .line 674
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v2, v9}, Lcom/mbridge/msdk/out/Frame;->setSessionId(Ljava/lang/String;)V

    .line 675
    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/out/Frame;->setCampaigns(Ljava/util/List;)V

    move-object/from16 v9, v23

    move-object/from16 v1, v30

    .line 676
    invoke-virtual {v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/out/Frame;->setTemplate(I)V

    move-object/from16 v1, v24

    .line 677
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v18, 0x1

    move-object v12, v1

    move-object/from16 v16, v6

    move-object/from16 v6, v20

    move-object/from16 v1, v22

    move-object/from16 v20, v7

    move-object/from16 v7, v19

    move-object/from16 v19, v14

    move v14, v15

    move-object v15, v13

    move v13, v2

    move-object v2, v9

    move-object/from16 v9, v29

    move-object/from16 v36, v17

    move-object/from16 v17, v11

    move-object/from16 v11, v36

    goto/16 :goto_3

    :cond_8
    move-object v1, v12

    move-object v13, v15

    .line 680
    invoke-virtual {v13, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setListFrames(Ljava/util/List;)V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_4

    goto/16 :goto_9

    :catch_3
    move-object v13, v15

    :catch_4
    :goto_6
    move-object v8, v13

    goto/16 :goto_c

    :cond_9
    move-object/from16 v29, v9

    move-object v11, v10

    const/16 v16, 0x0

    move-object/from16 v36, v20

    move-object/from16 v20, v6

    move-object v6, v13

    move-object v13, v15

    move v15, v14

    move-object/from16 v14, v19

    move-object/from16 v19, v7

    move-object/from16 v7, v36

    if-eqz v12, :cond_c

    .line 681
    :try_start_e
    invoke-virtual {v12}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-lez v1, :cond_c

    .line 682
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    move/from16 v2, v16

    .line 683
    :goto_7
    invoke-virtual {v12}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v2, v3, :cond_b

    .line 684
    invoke-virtual {v12, v2}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v9

    move-object/from16 v3, v20

    .line 686
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    move-object/from16 v4, v19

    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_8

    move-object/from16 v25, v13

    move-object/from16 v13, v29

    :try_start_f
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v16
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_7

    const/16 v17, 0x0

    move-object/from16 v34, v11

    move-object v11, v5

    move-object v5, v12

    move-object/from16 v12, v16

    move-object/from16 v18, v13

    move-object/from16 v16, v25

    move/from16 v13, v17

    move-object/from16 v35, v14

    move-object/from16 v14, v16

    move v0, v15

    move-object/from16 v15, p1

    :try_start_10
    invoke-static/range {v9 .. v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaign(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/foundation/entity/CampaignUnit;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v9
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_6

    if-eqz v9, :cond_a

    .line 688
    :try_start_11
    invoke-virtual {v9, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_tplid(I)V

    .line 689
    invoke-virtual {v9, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMof_template_url(Ljava/lang/String;)V

    .line 690
    invoke-virtual {v9, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNscpt(I)V

    .line 691
    invoke-virtual {v9, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPv_urls(Ljava/util/List;)V

    move-object/from16 v11, v35

    .line 692
    invoke-virtual {v9, v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReq_ext_data(Ljava/lang/String;)V

    .line 693
    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getVcn()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVcn(I)V

    .line 694
    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getTokenRule()I

    move-result v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTokenRule(I)V

    .line 695
    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getEncryptPrice()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setEncryptPrice(Ljava/lang/String;)V

    .line 696
    invoke-virtual {v1, v9}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_5

    move-object/from16 v9, v16

    move-object/from16 v10, v34

    goto :goto_8

    :catch_5
    move-object/from16 v8, v16

    goto :goto_c

    :cond_a
    move-object/from16 v11, v35

    move-object/from16 v9, v16

    move-object/from16 v10, v34

    .line 698
    :try_start_12
    invoke-virtual {v9, v10}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setMsg(Ljava/lang/String;)V

    :goto_8
    add-int/lit8 v2, v2, 0x1

    move v15, v0

    move-object/from16 v20, v3

    move-object/from16 v19, v4

    move-object v12, v5

    move-object v13, v9

    move-object v14, v11

    move-object/from16 v29, v18

    move-object/from16 v0, p0

    move-object v11, v10

    goto/16 :goto_7

    :catch_6
    move-object/from16 v9, v16

    goto :goto_b

    :catch_7
    move-object/from16 v9, v25

    goto :goto_b

    :cond_b
    move-object v9, v13

    .line 701
    invoke-virtual {v9, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->setAds(Ljava/util/ArrayList;)V
    :try_end_12
    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_12} :catch_a

    goto :goto_a

    :catch_8
    move-object v9, v13

    goto :goto_b

    :cond_c
    :goto_9
    move-object v9, v13

    :goto_a
    move-object v8, v9

    goto :goto_d

    :catch_9
    move-object v9, v15

    :catch_a
    :goto_b
    move-object v8, v9

    goto :goto_c

    :catch_b
    const/4 v8, 0x0

    .line 705
    :goto_c
    sget-object v0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->TAG:Ljava/lang/String;

    const-string v1, "parse campaign unit exception"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_d

    :cond_d
    const/4 v8, 0x0

    :goto_d
    return-object v8
.end method

.method public static parseV5CampaignUnit(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;
    .locals 1

    const-string v0, ""

    .line 451
    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseV5CampaignUnit(Lorg/json/JSONObject;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object p0

    return-object p0
.end method

.method public static parseV5CampaignUnit(Lorg/json/JSONObject;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;
    .locals 0

    .line 483
    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parseCampaignUnit(Lorg/json/JSONObject;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public assembCParams()Ljava/lang/String;
    .locals 9

    const-string v0, "|"

    .line 402
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->cParams:Ljava/lang/StringBuffer;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->length()I

    move-result v1

    if-lez v1, :cond_0

    .line 403
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->cParams:Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 406
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object v1

    .line 407
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    .line 408
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    .line 411
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v4

    const-string v5, "authority_general_data"

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v5, ""

    if-eqz v4, :cond_1

    .line 412
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    .line 413
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "x"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 414
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    goto :goto_0

    :cond_1
    move-object v4, v5

    move-object v6, v4

    .line 417
    :goto_0
    iget-object v7, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->cParams:Ljava/lang/StringBuffer;

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAdType()I

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v8, "1"

    .line 418
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    sget-object v8, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    .line 419
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v8, "MAL_16.3.67"

    .line 420
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 421
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->x()Ljava/lang/String;

    move-result-object v8

    invoke-direct {p0, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 422
    invoke-direct {p0, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v7, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 423
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-direct {p0, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v7, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 424
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/v;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {p0, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v7, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 425
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v7, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 426
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v7, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 427
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 428
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 429
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 430
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 432
    invoke-direct {p0, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 433
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->z()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 435
    invoke-direct {p0, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 437
    invoke-virtual {v7, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 438
    invoke-direct {p0, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 440
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->nullToEmpty(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v7, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/Object;)Ljava/lang/StringBuffer;

    .line 442
    invoke-virtual {v7, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    iput-object v7, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->cParams:Ljava/lang/StringBuffer;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 444
    sget-object v1, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 446
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->cParams:Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getAdHtml()Ljava/lang/String;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->adHtml:Ljava/lang/String;

    return-object v0
.end method

.method public getAdType()I
    .locals 1

    .line 350
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->adType:I

    return v0
.end method

.method public getAdZip()Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->adZip:Ljava/lang/String;

    return-object v0
.end method

.method public getAds()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 382
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getBannerHtml()Ljava/lang/String;
    .locals 1

    .line 147
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->bannerHtml:Ljava/lang/String;

    return-object v0
.end method

.method public getBannerUrl()Ljava/lang/String;
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->bannerUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getCsp()Ljava/lang/String;
    .locals 1

    .line 292
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->csp:Ljava/lang/String;

    return-object v0
.end method

.method public getDomain()Ljava/lang/String;
    .locals 1

    .line 300
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->domain:Ljava/lang/String;

    return-object v0
.end method

.method public getEncryptPrice()Ljava/lang/String;
    .locals 1

    .line 242
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->encryptPrice:Ljava/lang/String;

    return-object v0
.end method

.method public getEpMap()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 284
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->epMap:Ljava/util/HashMap;

    return-object v0
.end method

.method public getHtmlUrl()Ljava/lang/String;
    .locals 1

    .line 366
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->htmlUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getIa_all_ext1()Ljava/lang/String;
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_all_ext1:Ljava/lang/String;

    return-object v0
.end method

.method public getIa_all_ext2()Ljava/lang/String;
    .locals 1

    .line 195
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_all_ext2:Ljava/lang/String;

    return-object v0
.end method

.method public getIa_icon()Ljava/lang/String;
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_icon:Ljava/lang/String;

    return-object v0
.end method

.method public getIa_ori()I
    .locals 1

    .line 179
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_ori:I

    return v0
.end method

.method public getIa_rst()I
    .locals 1

    .line 163
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_rst:I

    return v0
.end method

.method public getIa_url()Ljava/lang/String;
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_url:Ljava/lang/String;

    return-object v0
.end method

.method public getJmDo()I
    .locals 1

    .line 318
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->jmDo:I

    return v0
.end method

.method public getListFrames()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;"
        }
    .end annotation

    .line 326
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->listFrames:Ljava/util/List;

    return-object v0
.end method

.method public getMsg()Ljava/lang/String;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->msg:Ljava/lang/String;

    return-object v0
.end method

.method public getOnlyImpressionUrl()Ljava/lang/String;
    .locals 1

    .line 374
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->onlyImpressionUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getParentSessionId()Ljava/lang/String;
    .locals 1

    .line 342
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parentSessionId:Ljava/lang/String;

    return-object v0
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 2

    .line 466
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->requestId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 467
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->requestId:Ljava/lang/String;

    return-object v0

    .line 469
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->onlyImpressionUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 470
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->onlyImpressionUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "k"

    .line 472
    invoke-virtual {v0, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->requestId:Ljava/lang/String;

    .line 474
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->requestId:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    :cond_2
    const-string v0, ""

    return-object v0
.end method

.method public getRks()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 276
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->rks:Ljava/util/HashMap;

    return-object v0
.end method

.method public getSessionId()Ljava/lang/String;
    .locals 1

    .line 334
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->sessionId:Ljava/lang/String;

    return-object v0
.end method

.method public getSh()Ljava/lang/String;
    .locals 1

    .line 308
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->sh:Ljava/lang/String;

    return-object v0
.end method

.method public getTemplate()I
    .locals 1

    .line 390
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->template:I

    return v0
.end method

.method public getTokenRule()I
    .locals 2

    .line 264
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->tokenRule:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getUnitSize()Ljava/lang/String;
    .locals 1

    .line 358
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->unitSize:Ljava/lang/String;

    return-object v0
.end method

.method public getVcn()I
    .locals 2

    .line 251
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->vcn:I

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    return v0

    :cond_0
    return v1
.end method

.method public setAdHtml(Ljava/lang/String;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->adHtml:Ljava/lang/String;

    return-void
.end method

.method public setAdType(I)V
    .locals 0

    .line 354
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->adType:I

    return-void
.end method

.method public setAdZip(Ljava/lang/String;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->adZip:Ljava/lang/String;

    return-void
.end method

.method public setAds(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 386
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ads:Ljava/util/ArrayList;

    return-void
.end method

.method public setBannerHtml(Ljava/lang/String;)V
    .locals 0

    .line 151
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->bannerHtml:Ljava/lang/String;

    return-void
.end method

.method public setBannerUrl(Ljava/lang/String;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->bannerUrl:Ljava/lang/String;

    return-void
.end method

.method public setCsp(Ljava/lang/String;)V
    .locals 0

    .line 296
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->csp:Ljava/lang/String;

    return-void
.end method

.method public setDomain(Ljava/lang/String;)V
    .locals 0

    .line 304
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->domain:Ljava/lang/String;

    return-void
.end method

.method public setEncryptPrice(Ljava/lang/String;)V
    .locals 0

    .line 246
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->encryptPrice:Ljava/lang/String;

    return-void
.end method

.method public setEpMap(Ljava/util/HashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 288
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->epMap:Ljava/util/HashMap;

    return-void
.end method

.method public setHtmlUrl(Ljava/lang/String;)V
    .locals 0

    .line 370
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->htmlUrl:Ljava/lang/String;

    return-void
.end method

.method public setIa_all_ext1(Ljava/lang/String;)V
    .locals 0

    .line 191
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_all_ext1:Ljava/lang/String;

    return-void
.end method

.method public setIa_all_ext2(Ljava/lang/String;)V
    .locals 0

    .line 199
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_all_ext2:Ljava/lang/String;

    return-void
.end method

.method public setIa_icon(Ljava/lang/String;)V
    .locals 0

    .line 159
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_icon:Ljava/lang/String;

    return-void
.end method

.method public setIa_ori(I)V
    .locals 0

    .line 183
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_ori:I

    return-void
.end method

.method public setIa_rst(I)V
    .locals 0

    .line 167
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_rst:I

    return-void
.end method

.method public setIa_url(Ljava/lang/String;)V
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->ia_url:Ljava/lang/String;

    return-void
.end method

.method public setJmDo(I)V
    .locals 0

    .line 322
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->jmDo:I

    return-void
.end method

.method public setListFrames(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Frame;",
            ">;)V"
        }
    .end annotation

    .line 330
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->listFrames:Ljava/util/List;

    return-void
.end method

.method public setMsg(Ljava/lang/String;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->msg:Ljava/lang/String;

    return-void
.end method

.method public setOnlyImpressionUrl(Ljava/lang/String;)V
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->onlyImpressionUrl:Ljava/lang/String;

    return-void
.end method

.method public setParentSessionId(Ljava/lang/String;)V
    .locals 0

    .line 346
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->parentSessionId:Ljava/lang/String;

    return-void
.end method

.method public setRks(Ljava/util/HashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 280
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->rks:Ljava/util/HashMap;

    return-void
.end method

.method public setSessionId(Ljava/lang/String;)V
    .locals 0

    .line 338
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->sessionId:Ljava/lang/String;

    return-void
.end method

.method public setSh(Ljava/lang/String;)V
    .locals 0

    .line 312
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->sh:Ljava/lang/String;

    return-void
.end method

.method public setTemplate(I)V
    .locals 0

    .line 394
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->template:I

    return-void
.end method

.method public setTokenRule(I)V
    .locals 0

    .line 272
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->tokenRule:I

    return-void
.end method

.method public setUnitSize(Ljava/lang/String;)V
    .locals 0

    .line 362
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->unitSize:Ljava/lang/String;

    return-void
.end method

.method public setVcn(I)V
    .locals 0

    .line 259
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->vcn:I

    return-void
.end method
