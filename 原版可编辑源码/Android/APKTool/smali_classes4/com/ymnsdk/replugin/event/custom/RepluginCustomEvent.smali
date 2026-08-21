.class public Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "RepluginCustomEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lorg/json/JSONObject;)V
    .locals 21

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    const-string v2, "scene_id"

    const-string v3, "is_new_user"

    const-string v4, "reason"

    const-string v5, "ispatch"

    const-string v6, "is_allow"

    const-string v7, "source"

    const-string v8, "cpsid"

    const-string v9, "request_msg"

    const-string v10, "request_code"

    const-string v11, "pluginId"

    const-string v12, "dur"

    const-string v13, "eventId"

    const-string v14, "label"

    const-string v15, "bl"

    move-object/from16 v16, v2

    const-string v2, "blk"

    move-object/from16 v17, v3

    const-string v3, "pg"

    move-object/from16 v18, v4

    const-string v4, "Act"

    move-object/from16 v19, v5

    const-string v5, "buyu_uid"

    .line 15
    invoke-direct/range {p0 .. p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    .line 17
    :try_start_0
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v20

    if-eqz v20, :cond_0

    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setAct(Ljava/lang/String;)V

    .line 18
    :cond_0
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setPg(Ljava/lang/String;)V

    .line 19
    :cond_1
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setBlk(Ljava/lang/String;)V

    .line 20
    :cond_2
    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setBl(Ljava/lang/String;)V

    .line 21
    :cond_3
    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setLabel(Ljava/lang/String;)V

    .line 22
    :cond_4
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setEid(Ljava/lang/String;)V

    .line 23
    :cond_5
    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_6

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setDur(Ljava/lang/String;)V

    .line 24
    :cond_6
    new-instance v2, Lcom/ymnsdk/replugin/event/base/CustEvent;

    move-object/from16 v3, p1

    invoke-direct {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 25
    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_7

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 26
    :cond_7
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 27
    :cond_8
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_9

    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 28
    :cond_9
    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setCpsid(Ljava/lang/String;)V

    .line 29
    :cond_a
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_b

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setBuyu_uid(Ljava/lang/String;)V

    .line 30
    :cond_b
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setSource(I)V

    .line 31
    :cond_c
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_d

    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setIs_allow(I)V

    :cond_d
    move-object/from16 v3, v19

    .line 32
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_e

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setIspatch(I)V

    :cond_e
    move-object/from16 v3, v18

    .line 33
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_f

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setReason(I)V

    :cond_f
    move-object/from16 v3, v17

    .line 34
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_10

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setIs_new_user(I)V

    :cond_10
    move-object/from16 v3, v16

    .line 35
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_11

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setScene_id(I)V

    .line 36
    :cond_11
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_12

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setBuyu_version(Ljava/lang/String;)V

    .line 38
    :cond_12
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;->setCust(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 41
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
