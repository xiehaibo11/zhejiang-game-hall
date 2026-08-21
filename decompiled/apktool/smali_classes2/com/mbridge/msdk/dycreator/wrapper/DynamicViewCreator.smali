.class public Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;
.super Ljava/lang/Object;
.source "DynamicViewCreator.java"


# static fields
.field private static volatile a:Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator; = null

.field private static b:I = -0xc9


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/dycreator/a/b;->a(Landroid/content/Context;)V

    return-void
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)Landroid/view/View;
    .locals 16

    const-string v1, ""

    const-string v2, "DynamicViewCreator"

    const/4 v0, 0x0

    if-nez p2, :cond_0

    return-object v0

    .line 135
    :cond_0
    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getFileDirs()Ljava/util/List;

    move-result-object v3

    if-nez v3, :cond_1

    return-object v0

    :cond_1
    const/4 v4, 0x0

    move-object v5, v0

    move v6, v4

    .line 140
    :goto_0
    :try_start_0
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v0

    if-ge v6, v0, :cond_13

    .line 141
    invoke-interface {v3, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/CharSequence;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto/16 :goto_4

    :cond_2
    if-nez v6, :cond_3

    .line 145
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/dycreator/e/f;->a(Landroid/content/Context;)Lcom/mbridge/msdk/dycreator/e/f;

    move-result-object v0

    invoke-interface {v3, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v0, v7}, Lcom/mbridge/msdk/dycreator/e/f;->a(Ljava/lang/String;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    move-object v5, v0

    goto/16 :goto_4

    .line 147
    :cond_3
    invoke-interface {v3, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-eqz p1, :cond_12

    if-eqz v5, :cond_12

    .line 2160
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-eqz v7, :cond_4

    goto/16 :goto_4

    .line 2164
    :cond_4
    :try_start_1
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "folder_dir"

    .line 2165
    invoke-virtual {v7, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 2166
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto/16 :goto_4

    .line 2169
    :cond_5
    new-instance v9, Lorg/json/JSONArray;

    const-string v0, "ext_template"

    invoke-virtual {v7, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v9, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 2170
    invoke-virtual {v9}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-nez v0, :cond_6

    goto/16 :goto_4

    :cond_6
    move v7, v4

    .line 2173
    :goto_1
    invoke-virtual {v9}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-ge v7, v0, :cond_12

    .line 2174
    invoke-virtual {v9, v7}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_7

    goto/16 :goto_3

    .line 2178
    :cond_7
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v11, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, "name"

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    .line 2180
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/dycreator/e/f;->a(Landroid/content/Context;)Lcom/mbridge/msdk/dycreator/e/f;

    move-result-object v11

    invoke-virtual {v11, v10}, Lcom/mbridge/msdk/dycreator/e/f;->a(Ljava/lang/String;)Landroid/view/View;

    move-result-object v10

    if-eqz v5, :cond_11

    if-eqz v10, :cond_11

    const-string v11, "layout"

    .line 2182
    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    const/4 v11, 0x3

    if-eqz v0, :cond_10

    if-eqz p1, :cond_11

    if-eqz v5, :cond_11

    if-eqz v10, :cond_11

    if-nez v0, :cond_8

    goto/16 :goto_3

    :cond_8
    :try_start_2
    const-string v12, "parent_id"

    .line 2201
    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 2202
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13

    if-nez v13, :cond_9

    .line 2203
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/dycreator/e/f;->a(Landroid/content/Context;)Lcom/mbridge/msdk/dycreator/e/f;

    move-result-object v13

    invoke-virtual {v13, v5, v12}, Lcom/mbridge/msdk/dycreator/e/f;->a(Landroid/view/ViewGroup;Ljava/lang/String;)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/view/ViewGroup;

    goto :goto_2

    :cond_9
    move-object v12, v5

    .line 2207
    :goto_2
    invoke-virtual {v12}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v13

    check-cast v13, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez v13, :cond_a

    goto :goto_3

    :cond_a
    const-string v14, "below"

    .line 2211
    invoke-virtual {v0, v14, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    .line 2212
    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v15

    if-nez v15, :cond_b

    .line 2213
    invoke-virtual {v14}, Ljava/lang/String;->hashCode()I

    move-result v14

    invoke-virtual {v13, v11, v14}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_b
    const-string v11, "left_of"

    .line 2215
    invoke-virtual {v0, v11, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 2216
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_c

    .line 2217
    invoke-virtual {v11}, Ljava/lang/String;->hashCode()I

    move-result v11

    invoke-virtual {v13, v4, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_c
    const-string v11, "right_of"

    .line 2219
    invoke-virtual {v0, v11, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 2220
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_d

    .line 2221
    invoke-virtual {v11}, Ljava/lang/String;->hashCode()I

    move-result v11

    const/4 v14, 0x1

    invoke-virtual {v13, v14, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    :cond_d
    const-string v11, "index"

    const/4 v14, -0x2

    .line 2223
    invoke-virtual {v0, v11, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v11

    const-string v15, "visibility"

    const/4 v4, -0x1

    .line 2225
    invoke-virtual {v0, v15, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-eq v0, v4, :cond_e

    .line 2227
    invoke-virtual {v10, v0}, Landroid/view/View;->setVisibility(I)V

    :cond_e
    if-eq v11, v14, :cond_f

    .line 2230
    invoke-virtual {v12, v10, v11, v13}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    goto :goto_3

    .line 2232
    :cond_f
    invoke-virtual {v12, v10, v13}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    .line 2235
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 2186
    :cond_10
    invoke-virtual {v5, v10, v11}, Landroid/view/ViewGroup;->addView(Landroid/view/View;I)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :cond_11
    :goto_3
    add-int/lit8 v7, v7, 0x1

    const/4 v4, 0x0

    goto/16 :goto_1

    :catch_1
    move-exception v0

    .line 2191
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    :cond_12
    :goto_4
    add-int/lit8 v6, v6, 0x1

    const/4 v4, 0x0

    goto/16 :goto_0

    :catch_2
    move-exception v0

    .line 151
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_13
    return-object v5
.end method

.method private a(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    if-eqz p1, :cond_1

    .line 278
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 281
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 282
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getDyAdType()Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 283
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getTemplateType()I

    move-result v3

    .line 286
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getCampaignEx()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v6

    move-object v4, p2

    move-object v5, p3

    .line 281
    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 288
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static getInstance()Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;
    .locals 2

    .line 39
    sget-object v0, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a:Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    if-nez v0, :cond_1

    .line 40
    const-class v0, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    monitor-enter v0

    .line 41
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a:Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    if-nez v1, :cond_0

    .line 42
    new-instance v1, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    invoke-direct {v1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a:Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    .line 44
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 46
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a:Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    return-object v0
.end method


# virtual methods
.method public createDynamicView(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)Landroid/view/View;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 116
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    .line 121
    :cond_1
    invoke-direct {p0, v1, p1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a(Landroid/content/Context;Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method

.method public createDynamicView(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;)V
    .locals 6

    const-string v0, "create dynamic view"

    if-nez p1, :cond_0

    .line 57
    new-instance p1, Lcom/mbridge/msdk/dycreator/b/a;

    sget-object v0, Lcom/mbridge/msdk/dycreator/b/b;->h:Lcom/mbridge/msdk/dycreator/b/b;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/dycreator/b/a;-><init>(Lcom/mbridge/msdk/dycreator/b/b;)V

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V

    return-void

    :cond_0
    if-nez p2, :cond_1

    return-void

    .line 63
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_2

    .line 65
    new-instance p1, Lcom/mbridge/msdk/dycreator/b/a;

    sget-object v0, Lcom/mbridge/msdk/dycreator/b/b;->b:Lcom/mbridge/msdk/dycreator/b/b;

    invoke-direct {p1, v0}, Lcom/mbridge/msdk/dycreator/b/a;-><init>(Lcom/mbridge/msdk/dycreator/b/b;)V

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V

    return-void

    :cond_2
    const/4 v2, 0x1

    if-eqz p1, :cond_5

    .line 1249
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getCampaignEx()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v3

    const/4 v4, 0x0

    if-nez v3, :cond_3

    .line 1251
    new-instance v3, Lcom/mbridge/msdk/dycreator/b/a;

    sget-object v5, Lcom/mbridge/msdk/dycreator/b/b;->e:Lcom/mbridge/msdk/dycreator/b/b;

    invoke-direct {v3, v5}, Lcom/mbridge/msdk/dycreator/b/a;-><init>(Lcom/mbridge/msdk/dycreator/b/b;)V

    invoke-interface {p2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V

    move v3, v4

    goto :goto_0

    :cond_3
    move v3, v2

    .line 1254
    :goto_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getFile()Ljava/io/File;

    move-result-object v5

    if-nez v5, :cond_4

    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getFileDirs()Ljava/util/List;

    move-result-object v5

    if-eqz v5, :cond_4

    .line 1256
    new-instance v3, Lcom/mbridge/msdk/dycreator/b/a;

    sget-object v5, Lcom/mbridge/msdk/dycreator/b/b;->g:Lcom/mbridge/msdk/dycreator/b/b;

    invoke-direct {v3, v5}, Lcom/mbridge/msdk/dycreator/b/a;-><init>(Lcom/mbridge/msdk/dycreator/b/b;)V

    invoke-interface {p2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V

    goto :goto_1

    :cond_4
    move v4, v3

    goto :goto_1

    :cond_5
    move v4, v2

    :goto_1
    if-eqz v4, :cond_9

    :try_start_0
    const-string v3, "start"

    .line 71
    invoke-direct {p0, p1, v0, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Ljava/lang/String;Ljava/lang/String;)V

    .line 72
    invoke-direct {p0, v1, p1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a(Landroid/content/Context;Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)Landroid/view/View;

    move-result-object v1

    if-nez v1, :cond_6

    .line 74
    new-instance v1, Lcom/mbridge/msdk/dycreator/b/a;

    sget-object v2, Lcom/mbridge/msdk/dycreator/b/b;->c:Lcom/mbridge/msdk/dycreator/b/b;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/dycreator/b/a;-><init>(Lcom/mbridge/msdk/dycreator/b/b;)V

    invoke-interface {p2, v1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V

    const-string v1, "fail"

    .line 75
    invoke-direct {p0, p1, v0, v1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_6
    const-string v3, "success"

    .line 78
    invoke-direct {p0, p1, v0, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    sget-object v3, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator$1;->a:[I

    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption;->getDyAdType()Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;->ordinal()I

    move-result v4

    aget v3, v3, v4

    if-eq v3, v2, :cond_8

    const/4 v2, 0x2

    if-eq v3, v2, :cond_7

    .line 89
    new-instance v2, Lcom/mbridge/msdk/dycreator/viewmodel/MBCommonViewVModel;

    invoke-direct {v2}, Lcom/mbridge/msdk/dycreator/viewmodel/MBCommonViewVModel;-><init>()V

    goto :goto_2

    .line 86
    :cond_7
    new-instance v2, Lcom/mbridge/msdk/dycreator/viewmodel/MBRewardViewVModel;

    invoke-direct {v2, p1}, Lcom/mbridge/msdk/dycreator/viewmodel/MBRewardViewVModel;-><init>(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)V

    goto :goto_2

    .line 83
    :cond_8
    new-instance v2, Lcom/mbridge/msdk/dycreator/viewmodel/MBSplashViewVModel;

    invoke-direct {v2, p1}, Lcom/mbridge/msdk/dycreator/viewmodel/MBSplashViewVModel;-><init>(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)V

    .line 92
    :goto_2
    invoke-interface {v2, p2}, Lcom/mbridge/msdk/dycreator/viewmodel/BaseViewModel;->setDynamicViewBackListener(Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;)V

    .line 94
    invoke-static {}, Lcom/mbridge/msdk/dycreator/binding/b;->a()Lcom/mbridge/msdk/dycreator/binding/b;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/dycreator/binding/b;->a(Lcom/mbridge/msdk/dycreator/viewmodel/BaseViewModel;)V

    .line 96
    invoke-interface {v2}, Lcom/mbridge/msdk/dycreator/viewmodel/BaseViewModel;->setModelDataAndBind()V

    const-string v2, "bind_data_done"

    .line 97
    invoke-direct {p0, p1, v0, v2}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->a(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    invoke-interface {p2, v1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreatedSuccess(Landroid/view/View;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 101
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DynamicViewCreator"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 102
    new-instance v0, Lcom/mbridge/msdk/dycreator/b/a;

    sget v1, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->b:I

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v1, p1}, Lcom/mbridge/msdk/dycreator/b/a;-><init>(ILjava/lang/String;)V

    invoke-interface {p2, v0}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;->viewCreateFail(Lcom/mbridge/msdk/dycreator/b/a;)V

    :cond_9
    :goto_3
    return-void
.end method
