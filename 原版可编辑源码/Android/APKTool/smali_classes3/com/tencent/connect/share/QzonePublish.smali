.class public Lcom/tencent/connect/share/QzonePublish;
.super Lcom/tencent/connect/common/BaseApi;
.source "ProGuard"


# static fields
.field public static final HULIAN_CALL_BACK:Ljava/lang/String; = "hulian_call_back"

.field public static final HULIAN_EXTRA_SCENE:Ljava/lang/String; = "hulian_extra_scene"

.field public static final PUBLISH_TO_QZONE_APP_NAME:Ljava/lang/String; = "appName"

.field public static final PUBLISH_TO_QZONE_EXTMAP:Ljava/lang/String; = "extMap"

.field public static final PUBLISH_TO_QZONE_IMAGE_URL:Ljava/lang/String; = "imageUrl"

.field public static final PUBLISH_TO_QZONE_KEY_TYPE:Ljava/lang/String; = "req_type"

.field public static final PUBLISH_TO_QZONE_SUMMARY:Ljava/lang/String; = "summary"

.field public static final PUBLISH_TO_QZONE_TYPE_PUBLISHMOOD:I = 0x3

.field public static final PUBLISH_TO_QZONE_TYPE_PUBLISHVIDEO:I = 0x4

.field public static final PUBLISH_TO_QZONE_VIDEO_DURATION:Ljava/lang/String; = "videoDuration"

.field public static final PUBLISH_TO_QZONE_VIDEO_PATH:Ljava/lang/String; = "videoPath"

.field public static final PUBLISH_TO_QZONE_VIDEO_SIZE:Ljava/lang/String; = "videoSize"


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tencent/connect/auth/QQToken;)V
    .locals 0

    .line 60
    invoke-direct {p0, p2}, Lcom/tencent/connect/common/BaseApi;-><init>(Lcom/tencent/connect/auth/QQToken;)V

    return-void
.end method

.method static synthetic a(Lcom/tencent/connect/share/QzonePublish;Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2, p3}, Lcom/tencent/connect/share/QzonePublish;->b(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V

    return-void
.end method

.method private b(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V
    .locals 32

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v0, p2

    move-object/from16 v3, p3

    const-string v4, ""

    const-string v5, "openSDK_LOG.QzonePublish"

    const-string v6, "doPublishToQzone() --start"

    .line 189
    invoke-static {v5, v6}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    new-instance v6, Ljava/lang/StringBuffer;

    const-string v7, "mqqapi://qzone/publish?src_type=app&version=1&file_type=news"

    invoke-direct {v6, v7}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    const-string v7, "imageUrl"

    .line 192
    invoke-virtual {v0, v7}, Landroid/os/Bundle;->getStringArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v7

    const-string v8, "summary"

    .line 193
    invoke-virtual {v0, v8}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x3

    const-string v10, "req_type"

    .line 194
    invoke-virtual {v0, v10, v9}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v10

    const-string v11, "appName"

    .line 195
    invoke-virtual {v0, v11}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    const-string v12, "videoPath"

    .line 196
    invoke-virtual {v0, v12}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    const-string v13, "videoDuration"

    .line 197
    invoke-virtual {v0, v13}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v13

    const-string v14, "videoSize"

    .line 198
    invoke-virtual {v0, v14}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v14

    :try_start_0
    const-string v9, "extMap"

    .line 201
    invoke-virtual {v0, v9}, Landroid/os/Bundle;->getBundle(Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 203
    invoke-virtual {v0}, Landroid/os/Bundle;->keySet()Ljava/util/Set;

    move-result-object v9
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    move-object/from16 v16, v4

    .line 204
    :try_start_1
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 205
    invoke-interface {v9}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :goto_0
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v17

    if-eqz v17, :cond_1

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v17

    move-object/from16 p2, v9

    move-object/from16 v9, v17

    check-cast v9, Ljava/lang/String;

    .line 206
    invoke-virtual {v0, v9}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    invoke-static/range {v17 .. v17}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-nez v17, :cond_0

    move-object/from16 v17, v11

    .line 207
    :try_start_2
    invoke-virtual {v0, v9}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v4, v9, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    :cond_0
    move-object/from16 v17, v11

    :goto_1
    move-object/from16 v9, p2

    move-object/from16 v11, v17

    goto :goto_0

    :cond_1
    move-object/from16 v17, v11

    .line 210
    invoke-virtual {v4}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-lez v0, :cond_3

    .line 211
    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_5

    :catch_0
    move-exception v0

    goto :goto_3

    :catch_1
    move-exception v0

    goto :goto_2

    :cond_2
    move-object/from16 v16, v4

    move-object/from16 v17, v11

    goto :goto_4

    :catch_2
    move-exception v0

    move-object/from16 v16, v4

    :goto_2
    move-object/from16 v17, v11

    :goto_3
    const-string v4, "publishToQzone()  --error parse extmap"

    .line 215
    invoke-static {v5, v4, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_4
    move-object/from16 v0, v16

    .line 219
    :goto_5
    iget-object v4, v1, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    invoke-virtual {v4}, Lcom/tencent/connect/auth/QQToken;->getAppId()Ljava/lang/String;

    move-result-object v4

    .line 220
    iget-object v9, v1, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    invoke-virtual {v9}, Lcom/tencent/connect/auth/QQToken;->getOpenId()Ljava/lang/String;

    move-result-object v9

    .line 222
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "openId:"

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v5, v1}, Lcom/tencent/open/log/SLog;->v(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x3

    if-ne v1, v10, :cond_8

    if-eqz v7, :cond_8

    .line 226
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 227
    new-instance v11, Ljava/lang/StringBuffer;

    invoke-direct {v11}, Ljava/lang/StringBuffer;-><init>()V

    move-object/from16 v18, v5

    .line 228
    invoke-virtual {v7}, Ljava/util/ArrayList;->size()I

    move-result v5

    move-object/from16 v19, v0

    const/4 v0, 0x0

    :goto_6
    if-ge v0, v5, :cond_6

    .line 230
    invoke-virtual {v7, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v16

    check-cast v16, Ljava/lang/String;

    move-object/from16 v20, v9

    invoke-static/range {v16 .. v16}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v1, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 231
    invoke-virtual {v7, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-static {v4, v2, v9, v3}, Lcom/tencent/open/utils/m;->a(Ljava/lang/String;Landroid/app/Activity;Ljava/lang/String;Lcom/tencent/tauth/IUiListener;)Ljava/lang/String;

    move-result-object v9

    .line 232
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_4

    .line 233
    invoke-static {v9}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v11, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :cond_4
    add-int/lit8 v9, v5, -0x1

    if-eq v0, v9, :cond_5

    const-string v9, ";"

    .line 236
    invoke-virtual {v1, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 237
    invoke-virtual {v11, v9}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :cond_5
    add-int/lit8 v0, v0, 0x1

    move-object/from16 v9, v20

    goto :goto_6

    :cond_6
    move-object/from16 v20, v9

    .line 240
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "&image_url="

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v5, 0x2

    invoke-static {v1, v5}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 241
    invoke-virtual {v11}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 242
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&image_uri="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v5, 0x2

    invoke-static {v1, v5}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :cond_7
    const-string v0, "7"

    goto :goto_7

    :cond_8
    move-object/from16 v19, v0

    move-object/from16 v18, v5

    move-object/from16 v20, v9

    move-object/from16 v0, v16

    :goto_7
    const/4 v1, 0x4

    if-ne v1, v10, :cond_a

    .line 248
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&videoPath="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v12}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v5, 0x2

    invoke-static {v1, v5}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 249
    invoke-static {v4, v2, v12, v3}, Lcom/tencent/open/utils/m;->a(Ljava/lang/String;Landroid/app/Activity;Ljava/lang/String;Lcom/tencent/tauth/IUiListener;)Ljava/lang/String;

    move-result-object v0

    .line 250
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    .line 251
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "&videoUri="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v0

    const/4 v3, 0x2

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 253
    :cond_9
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&videoDuration="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v13}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 254
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&videoSize="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v14, v15}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v0, "8"

    :cond_a
    move-object/from16 v26, v0

    .line 257
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_b

    .line 259
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&description="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v8}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 263
    :cond_b
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_c

    .line 264
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&share_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 267
    :cond_c
    invoke-static/range {v17 .. v17}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_d

    .line 268
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&app_name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {v17 .. v17}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 271
    :cond_d
    invoke-static/range {v20 .. v20}, Lcom/tencent/open/utils/m;->e(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_e

    .line 272
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&open_id="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {v20 .. v20}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 275
    :cond_e
    invoke-static/range {v19 .. v19}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_f

    .line 276
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&share_qzone_ext_str="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {v19 .. v19}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 280
    :cond_f
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "&req_type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v10}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tencent/open/utils/m;->j(Ljava/lang/String;)[B

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v1, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 283
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "doPublishToQzone, url: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v1, v18

    invoke-static {v1, v0}, Lcom/tencent/open/log/SLog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 285
    invoke-static {}, Lcom/tencent/open/utils/g;->a()Landroid/content/Context;

    move-result-object v0

    move-object/from16 v1, p0

    iget-object v3, v1, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    const-string v4, "shareToNativeQQ"

    filled-new-array {v4}, [Ljava/lang/String;

    move-result-object v4

    const-string v5, "requireApi"

    invoke-static {v0, v3, v5, v4}, Lcom/tencent/connect/a/a;->a(Landroid/content/Context;Lcom/tencent/connect/auth/QQToken;Ljava/lang/String;[Ljava/lang/String;)V

    .line 287
    new-instance v0, Landroid/content/Intent;

    const-string v3, "android.intent.action.VIEW"

    invoke-direct {v0, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v3, "com.tencent.mobileqq"

    .line 289
    invoke-virtual {v0, v3}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 290
    invoke-virtual {v6}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v0, v3}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 292
    invoke-virtual/range {p1 .. p1}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "pkg_name"

    invoke-virtual {v0, v4, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 294
    iget-object v3, v1, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    invoke-virtual {v3}, Lcom/tencent/connect/auth/QQToken;->getOpenId()Ljava/lang/String;

    move-result-object v21

    iget-object v3, v1, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    .line 295
    invoke-virtual {v3}, Lcom/tencent/connect/auth/QQToken;->getAppId()Ljava/lang/String;

    move-result-object v25

    const-string v22, "11"

    const-string v23, "3"

    const-string v24, "ANDROIDQQ.SHARETOQZ.XX"

    const-string v27, ""

    const-string v28, ""

    const-string v29, "0"

    const-string v30, "1"

    const-string v31, "0"

    .line 294
    invoke-static/range {v21 .. v31}, Lcom/tencent/open/utils/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v3

    .line 297
    sget-object v4, Lcom/tencent/connect/common/Constants;->KEY_PASS_REPORT_VIA_PARAM:Ljava/lang/String;

    invoke-virtual {v0, v4, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    const/16 v3, 0x2778

    const/4 v4, 0x0

    .line 298
    invoke-virtual {v1, v2, v3, v0, v4}, Lcom/tencent/connect/share/QzonePublish;->a(Landroid/app/Activity;ILandroid/content/Intent;Z)V

    const-string v0, "openSDK_LOG"

    const-string v2, "doPublishToQzone() --end"

    .line 300
    invoke-static {v0, v2}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public publishToQzone(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V
    .locals 19

    move-object/from16 v6, p0

    move-object/from16 v3, p2

    move-object/from16 v7, p3

    const-string v8, "openSDK_LOG.QzonePublish"

    const-string v0, "publishToQzone() -- start"

    .line 65
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    invoke-static {v8, v7}, Lcom/tencent/connect/a;->a(Ljava/lang/String;Lcom/tencent/tauth/IUiListener;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x4

    const/4 v9, 0x0

    if-nez v3, :cond_1

    .line 72
    new-instance v1, Lcom/tencent/tauth/UiError;

    const/4 v2, -0x6

    const-string v3, "\u4f20\u5165\u53c2\u6570\u4e0d\u53ef\u4ee5\u4e3a\u7a7a"

    invoke-direct {v1, v2, v3, v9}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {v7, v1}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    const-string v1, "-->publishToQzone, params is null"

    .line 74
    invoke-static {v8, v1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v9

    const/4 v10, 0x1

    iget-object v1, v6, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    invoke-virtual {v1}, Lcom/tencent/connect/auth/QQToken;->getAppId()Ljava/lang/String;

    move-result-object v13

    .line 76
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v15

    const/16 v16, 0x0

    const/16 v17, 0x1

    const-string v11, "SHARE_CHECK_SDK"

    const-string v12, "1000"

    const-string v18, "\u4f20\u5165\u53c2\u6570\u4e0d\u53ef\u4ee5\u4e3a\u7a7a"

    .line 75
    invoke-virtual/range {v9 .. v18}, Lcom/tencent/open/b/e;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;IILjava/lang/String;)V

    return-void

    .line 81
    :cond_1
    invoke-static/range {p1 .. p1}, Lcom/tencent/open/utils/m;->f(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 82
    new-instance v1, Lcom/tencent/tauth/UiError;

    const/16 v2, -0xf

    const-string v3, "\u624bQ\u7248\u672c\u8fc7\u4f4e\uff0c\u8bf7\u4e0b\u8f7d\u5b89\u88c5\u6700\u65b0\u7248\u624bQ"

    invoke-direct {v1, v2, v3, v9}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {v7, v1}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    const-string v1, "-->publishToQzone, this is not support below qq 5.9.5"

    .line 83
    invoke-static {v8, v1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 84
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v9

    const/4 v10, 0x1

    iget-object v1, v6, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    .line 85
    invoke-virtual {v1}, Lcom/tencent/connect/auth/QQToken;->getAppId()Ljava/lang/String;

    move-result-object v13

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v15

    const/16 v16, 0x0

    const/16 v17, 0x1

    const-string v11, "SHARE_CHECK_SDK"

    const-string v12, "1000"

    const-string v18, "publicToQzone, this is not support below qq 5.9.5"

    .line 84
    invoke-virtual/range {v9 .. v18}, Lcom/tencent/open/b/e;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;IILjava/lang/String;)V

    .line 88
    new-instance v7, Lcom/tencent/open/TDialog;

    const-string v0, ""

    invoke-virtual {v6, v0}, Lcom/tencent/connect/share/QzonePublish;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    iget-object v5, v6, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    const-string v2, ""

    move-object v0, v7

    move-object/from16 v1, p1

    invoke-direct/range {v0 .. v5}, Lcom/tencent/open/TDialog;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tencent/tauth/IUiListener;Lcom/tencent/connect/auth/QQToken;)V

    invoke-virtual {v7}, Lcom/tencent/open/TDialog;->show()V

    return-void

    .line 93
    :cond_2
    invoke-static/range {p1 .. p1}, Lcom/tencent/open/utils/m;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    const-string v4, "appName"

    if-nez v1, :cond_3

    .line 96
    invoke-virtual {v3, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    .line 98
    :cond_3
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    const/16 v10, 0x14

    if-le v5, v10, :cond_4

    .line 99
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2, v10}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "..."

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 102
    :cond_4
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 103
    invoke-virtual {v3, v4, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    const-string v1, "req_type"

    .line 108
    invoke-virtual {v3, v1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v1

    const/4 v4, 0x3

    if-ne v1, v4, :cond_9

    const-string v0, "imageUrl"

    .line 113
    invoke-virtual {v3, v0}, Landroid/os/Bundle;->getStringArrayList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_8

    .line 115
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-lez v4, :cond_8

    .line 116
    :goto_1
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-ge v2, v4, :cond_7

    .line 117
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 118
    invoke-static {v4}, Lcom/tencent/open/utils/m;->i(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_6

    .line 120
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    add-int/lit8 v2, v2, -0x1

    :cond_6
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 124
    :cond_7
    invoke-virtual {v3, v0, v1}, Landroid/os/Bundle;->putStringArrayList(Ljava/lang/String;Ljava/util/ArrayList;)V

    .line 127
    :cond_8
    invoke-direct/range {p0 .. p3}, Lcom/tencent/connect/share/QzonePublish;->b(Landroid/app/Activity;Landroid/os/Bundle;Lcom/tencent/tauth/IUiListener;)V

    const-string v0, "publishToQzone() --end"

    .line 128
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_9
    const/4 v10, -0x5

    if-ne v1, v0, :cond_b

    const-string v0, "videoPath"

    .line 131
    invoke-virtual {v3, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 132
    invoke-static {v11}, Lcom/tencent/open/utils/m;->i(Ljava/lang/String;)Z

    move-result v0

    const-string v12, "\u8bf7\u9009\u62e9\u6709\u6548\u7684\u89c6\u9891\u6587\u4ef6"

    if-nez v0, :cond_a

    const-string v0, "publishToQzone() video url invalid"

    .line 133
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 134
    new-instance v0, Lcom/tencent/tauth/UiError;

    invoke-direct {v0, v10, v12, v9}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {v7, v0}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    return-void

    .line 139
    :cond_a
    new-instance v13, Landroid/media/MediaPlayer;

    invoke-direct {v13}, Landroid/media/MediaPlayer;-><init>()V

    .line 140
    new-instance v14, Lcom/tencent/connect/share/QzonePublish$1;

    move-object v0, v14

    move-object/from16 v1, p0

    move-object v2, v11

    move-object/from16 v3, p2

    move-object/from16 v4, p1

    move-object/from16 v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/tencent/connect/share/QzonePublish$1;-><init>(Lcom/tencent/connect/share/QzonePublish;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Lcom/tencent/tauth/IUiListener;)V

    invoke-virtual {v13, v14}, Landroid/media/MediaPlayer;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    .line 155
    new-instance v0, Lcom/tencent/connect/share/QzonePublish$2;

    invoke-direct {v0, v6, v7}, Lcom/tencent/connect/share/QzonePublish$2;-><init>(Lcom/tencent/connect/share/QzonePublish;Lcom/tencent/tauth/IUiListener;)V

    invoke-virtual {v13, v0}, Landroid/media/MediaPlayer;->setOnErrorListener(Landroid/media/MediaPlayer$OnErrorListener;)V

    .line 166
    :try_start_0
    invoke-virtual {v13, v11}, Landroid/media/MediaPlayer;->setDataSource(Ljava/lang/String;)V

    .line 167
    invoke-virtual {v13}, Landroid/media/MediaPlayer;->prepareAsync()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    const-string v0, "publishToQzone() exception(s) occurred when preparing mediaplayer"

    .line 169
    invoke-static {v8, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    new-instance v0, Lcom/tencent/tauth/UiError;

    invoke-direct {v0, v10, v12, v9}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {v7, v0}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    :goto_2
    return-void

    .line 175
    :cond_b
    new-instance v1, Lcom/tencent/tauth/UiError;

    const-string v2, "\u8bf7\u9009\u62e9\u652f\u6301\u7684\u5206\u4eab\u7c7b\u578b"

    invoke-direct {v1, v10, v2, v9}, Lcom/tencent/tauth/UiError;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-interface {v7, v1}, Lcom/tencent/tauth/IUiListener;->onError(Lcom/tencent/tauth/UiError;)V

    const-string v1, "publishToQzone() error--end\u8bf7\u9009\u62e9\u652f\u6301\u7684\u5206\u4eab\u7c7b\u578b"

    .line 177
    invoke-static {v8, v1}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    invoke-static {}, Lcom/tencent/open/b/e;->a()Lcom/tencent/open/b/e;

    move-result-object v9

    const/4 v10, 0x1

    iget-object v1, v6, Lcom/tencent/connect/share/QzonePublish;->c:Lcom/tencent/connect/auth/QQToken;

    .line 180
    invoke-virtual {v1}, Lcom/tencent/connect/auth/QQToken;->getAppId()Ljava/lang/String;

    move-result-object v13

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v15

    const/16 v16, 0x0

    const/16 v17, 0x1

    const-string v11, "SHARE_CHECK_SDK"

    const-string v12, "1000"

    const-string v18, "publishToQzone() \u8bf7\u9009\u62e9\u652f\u6301\u7684\u5206\u4eab\u7c7b\u578b"

    .line 179
    invoke-virtual/range {v9 .. v18}, Lcom/tencent/open/b/e;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;IILjava/lang/String;)V

    return-void
.end method
