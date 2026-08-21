.class Lcom/sigmob/sdk/mraid2/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid2/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/m;->a()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/m;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    const-string v0, "MraidActivity failed to load. Finishing the activity"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/m;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const-string v1, "com.sigmob.action.interstitial.fail"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/m;->b(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/m;->b(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method

.method public a(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const-string v0, "com.sigmob.action.interstitial.show"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V

    const-string p1, "onLoaded() called"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lorg/json/JSONObject;)V
    .locals 17

    move-object/from16 v10, p0

    move-object/from16 v8, p2

    move-object/from16 v0, p3

    const-string v1, "url"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    const-string v1, "event"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string v1, "data"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_11

    const-string v1, "log_data"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v12

    const-string v1, "default_url"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v1, "in_app"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v13

    const-string v1, "parse_302"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v1

    const-string v2, "interaction_type"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v6, ""

    const/4 v3, 0x1

    if-eq v2, v3, :cond_f

    const/4 v1, 0x2

    const/4 v4, 0x0

    if-eq v2, v1, :cond_c

    const/4 v5, 0x3

    const/4 v13, 0x0

    if-eq v2, v5, :cond_5

    const/4 v5, 0x7

    if-eq v2, v5, :cond_0

    goto/16 :goto_a

    :cond_0
    const-string v2, "program"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    const-string v2, "wx_app_id"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v5, "wx_app_username"

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v7, "wx_app_path"

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_2

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_2

    :try_start_0
    const-string v7, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    invoke-static {v7}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v7

    const-string v14, "createWXAPI"

    new-array v15, v1, [Ljava/lang/Class;

    const-class v16, Landroid/content/Context;

    aput-object v16, v15, v4

    const-class v16, Ljava/lang/String;

    aput-object v16, v15, v3

    invoke-virtual {v7, v14, v15}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v14

    invoke-virtual {v14, v3}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v1, v1, [Ljava/lang/Object;

    iget-object v15, v10, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v15}, Lcom/sigmob/sdk/mraid2/m;->i(Lcom/sigmob/sdk/mraid2/m;)Landroid/content/Context;

    move-result-object v15

    aput-object v15, v1, v4

    aput-object v2, v1, v3

    invoke-virtual {v14, v7, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v2, "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req"

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v7

    const-string v14, "userName"

    invoke-virtual {v2, v14}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v14

    invoke-virtual {v14, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {v14, v7, v5}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v5, "path"

    invoke-virtual {v2, v5}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v5

    invoke-virtual {v5, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {v5, v7, v0}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v0, "miniprogramType"

    invoke-virtual {v2, v0}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    invoke-virtual {v0, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v7, v2}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-string v2, "sendReq"

    new-array v5, v3, [Ljava/lang/Class;

    invoke-virtual {v7}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v14

    aput-object v14, v5, v4

    invoke-virtual {v0, v2, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    invoke-virtual {v0, v3}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v3, [Ljava/lang/Object;

    aput-object v7, v2, v4

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v1, "lance"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "openB:isSendReq "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-nez v0, :cond_3

    const-string v6, "sendReq mini_program return false"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_2
    const-string v0, "wx_app_id or wx_app_username or wx_app_path is null"

    :goto_0
    move-object v6, v0

    :cond_3
    :goto_1
    if-eqz v8, :cond_e

    :try_start_1
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "open_deeplink"

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->I:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v8, v1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v1

    const-string v2, "1"

    :goto_2
    iput-object v2, v1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    goto :goto_3

    :cond_4
    const-string v0, "open_deeplink_failed"

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->J:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v8, v1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v1

    const-string v2, "0"

    goto :goto_2

    :goto_3
    new-instance v1, Lcom/sigmob/sdk/mraid2/m$1$3;

    invoke-direct {v1, v10, v11, v12}, Lcom/sigmob/sdk/mraid2/m$1$3;-><init>(Lcom/sigmob/sdk/mraid2/m$1;Ljava/lang/String;Lorg/json/JSONObject;)V

    invoke-static {v0, v13, v8, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto/16 :goto_8

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto/16 :goto_8

    :cond_5
    const-string v1, "market"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_6

    return-void

    :cond_6
    const-string v1, "market_url"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v1, "app_package_name"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v1, "appstore_package_name"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    :try_start_2
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    iget-object v1, v10, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/m;->g(Lcom/sigmob/sdk/mraid2/m;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/AppPackageUtil;->getPackageManager(Landroid/content/Context;)Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {v1, v7, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    if-eqz v1, :cond_7

    invoke-virtual {v0, v7}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :cond_7
    iget-object v1, v10, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/m;->h(Lcom/sigmob/sdk/mraid2/m;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/common/s;->b(Landroid/content/Context;Landroid/content/Intent;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    move-object v11, v6

    goto :goto_5

    :catchall_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    goto :goto_4

    :cond_8
    const-string v0, "market_url is null"

    :goto_4
    move-object v11, v0

    :goto_5
    if-eqz v8, :cond_b

    :try_start_3
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    const-string v0, "open_market"

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_a

    new-instance v1, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->f()Ljava/lang/String;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ".log"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v1, v2, v4}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->writeToCache(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_6

    :cond_9
    const-string v0, "open_market_failed"

    :cond_a
    :goto_6
    new-instance v14, Lcom/sigmob/sdk/mraid2/m$1$2;

    move-object v1, v14

    move-object/from16 v2, p0

    move-object/from16 v4, p2

    move-object v6, v7

    move-object v7, v12

    invoke-direct/range {v1 .. v7}, Lcom/sigmob/sdk/mraid2/m$1$2;-><init>(Lcom/sigmob/sdk/mraid2/m$1;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    invoke-static {v0, v13, v8, v14}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_7

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_b
    :goto_7
    iget-object v1, v10, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object v4, v9

    move-object v5, v12

    move-object v6, v11

    goto :goto_9

    :cond_c
    if-nez v8, :cond_d

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0, v4}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setRecord(Z)V

    invoke-static {v11, v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_8

    :cond_d
    invoke-virtual {v8, v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setRecord(Z)V

    invoke-static {v11, v8}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_e
    :goto_8
    iget-object v1, v10, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object v4, v9

    move-object v5, v12

    :goto_9
    invoke-static/range {v1 .. v6}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/m;Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)V

    goto :goto_a

    :cond_f
    if-eqz v1, :cond_10

    new-instance v0, Lcom/sigmob/sdk/mraid2/m$1$1;

    move-object v1, v0

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move-object v5, v9

    move-object v6, v12

    move v8, v13

    move-object v9, v11

    invoke-direct/range {v1 .. v9}, Lcom/sigmob/sdk/mraid2/m$1$1;-><init>(Lcom/sigmob/sdk/mraid2/m$1;Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;ZLjava/lang/String;)V

    invoke-static {v11, v0}, Lcom/sigmob/sdk/base/common/ah;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/ah$a;)V

    goto :goto_a

    :cond_10
    iget-object v1, v10, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object v4, v9

    move-object v5, v11

    move-object v6, v12

    move v8, v13

    invoke-static/range {v1 .. v8}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/m;Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_11
    :goto_a
    return-void
.end method

.method public a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Finishing the activity due to a problem: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/m;->c(Lcom/sigmob/sdk/mraid2/m;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const-string v0, "com.sigmob.action.interstitial.fail"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid2/m;->c(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/m;->d(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method

.method public a(Z)V
    .locals 0

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/m;->j(Lcom/sigmob/sdk/mraid2/m;)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/m;->k(Lcom/sigmob/sdk/mraid2/m;)V

    :goto_0
    return-void
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const-string v1, "com.sigmob.action.rewardedvideo.Close"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/m;->d(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/m;->a(Lcom/sigmob/sdk/mraid2/m;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/m;->e(Lcom/sigmob/sdk/mraid2/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method

.method public c()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/m;->f(Lcom/sigmob/sdk/mraid2/m;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/m;->b(Lcom/sigmob/sdk/mraid2/m;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/m$1;->a:Lcom/sigmob/sdk/mraid2/m;

    const-string v1, "com.sigmob.action.rewardedvideo.complete"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/m;->e(Lcom/sigmob/sdk/mraid2/m;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
