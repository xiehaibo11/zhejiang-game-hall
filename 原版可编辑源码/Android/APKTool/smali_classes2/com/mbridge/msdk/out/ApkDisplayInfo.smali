.class public Lcom/mbridge/msdk/out/ApkDisplayInfo;
.super Ljava/lang/Object;
.source "ApkDisplayInfo.java"

# interfaces
.implements Lcom/mbridge/msdk/system/NoProGuard;
.implements Ljava/io/Serializable;


# static fields
.field private static JSON_KEY_APP_NAME:Ljava/lang/String; = "app_name"

.field private static JSON_KEY_APP_VER:Ljava/lang/String; = "app_ver"

.field private static JSON_KEY_DEV_NAME:Ljava/lang/String; = "dev_name"

.field private static JSON_KEY_PERM_DESC:Ljava/lang/String; = "perm_desc"

.field private static JSON_KEY_PERM_DESC_ALL:Ljava/lang/String; = "ori_perm_all"

.field private static JSON_KEY_PERM_DESC_ORI:Ljava/lang/String; = "ori_perm_desc"

.field private static JSON_KEY_PRI_URL:Ljava/lang/String; = "pri_url"

.field private static JSON_KEY_UPD_TIME:Ljava/lang/String; = "upd_time"


# instance fields
.field private appName:Ljava/lang/String;

.field private appVersion:Ljava/lang/String;

.field private devName:Ljava/lang/String;

.field private permDescAllList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private permDescList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private permDescOriList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private priUrl:Ljava/lang/String;

.field private updateTime:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    .line 34
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    .line 35
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    return-void
.end method

.method public static arrayListArrayCovertToJsonArray(Ljava/util/ArrayList;)Lorg/json/JSONArray;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 197
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 198
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    const/4 v1, 0x0

    .line 199
    :goto_0
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 200
    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;
    .locals 0

    if-nez p0, :cond_0

    .line 112
    new-instance p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;

    invoke-direct {p0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;-><init>()V

    :cond_0
    return-object p0
.end method

.method public static jsonArrayCovertToArrayList(Lorg/json/JSONArray;)Ljava/util/ArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 186
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_1

    .line 187
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 188
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 189
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static parse(Lorg/json/JSONObject;)Lcom/mbridge/msdk/out/ApkDisplayInfo;
    .locals 7

    const/4 v0, 0x0

    if-eqz p0, :cond_a

    .line 217
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_APP_NAME:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 218
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 219
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_APP_NAME:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setAppName(Ljava/lang/String;)V

    .line 221
    :cond_0
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    .line 222
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 223
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 226
    invoke-static {v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->jsonArrayCovertToArrayList(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setPermDescList(Ljava/util/ArrayList;)V

    .line 227
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPermDescAllList()Ljava/util/ArrayList;

    move-result-object v3

    move v4, v2

    .line 229
    :goto_0
    :try_start_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_2

    .line 230
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v5

    .line 231
    instance-of v6, v5, Ljava/lang/String;

    if-eqz v6, :cond_1

    .line 232
    check-cast v5, Ljava/lang/String;

    .line 1023
    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 232
    invoke-virtual {v3, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 236
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 238
    :cond_2
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setPermDescAllList(Ljava/util/ArrayList;)V

    .line 242
    :cond_3
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC_ORI:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 243
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 244
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC_ORI:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    if-eqz v1, :cond_6

    .line 246
    invoke-static {v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->jsonArrayCovertToArrayList(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setPermDescOriList(Ljava/util/ArrayList;)V

    .line 247
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPermDescAllList()Ljava/util/ArrayList;

    move-result-object v3

    .line 250
    :goto_1
    :try_start_1
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v2, v4, :cond_5

    .line 251
    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    .line 252
    instance-of v5, v4, Ljava/lang/String;

    if-eqz v5, :cond_4

    .line 253
    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 257
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 259
    :cond_5
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setPermDescAllList(Ljava/util/ArrayList;)V

    .line 262
    :cond_6
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PRI_URL:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 263
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 264
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PRI_URL:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setPriUrl(Ljava/lang/String;)V

    .line 266
    :cond_7
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_UPD_TIME:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 267
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 268
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_UPD_TIME:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setUpdateTime(Ljava/lang/String;)V

    .line 270
    :cond_8
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_APP_VER:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 271
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 272
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_APP_VER:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setAppVersion(Ljava/lang/String;)V

    .line 274
    :cond_9
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_DEV_NAME:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 275
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->checkApkDisplayInfoIfNullWillInit(Lcom/mbridge/msdk/out/ApkDisplayInfo;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v0

    .line 276
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_DEV_NAME:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->setDevName(Ljava/lang/String;)V

    :cond_a
    return-object v0
.end method

.method public static parseByString(Ljava/lang/String;)Lcom/mbridge/msdk/out/ApkDisplayInfo;
    .locals 1

    .line 175
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 176
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 177
    invoke-static {v0}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->parse(Lorg/json/JSONObject;)Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object p0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 180
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public getAppName()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppVersion()Ljava/lang/String;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appVersion:Ljava/lang/String;

    return-object v0
.end method

.method public getDevName()Ljava/lang/String;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->devName:Ljava/lang/String;

    return-object v0
.end method

.method public getPermDescAllList()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 66
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getPermDescList()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getPermDescOriList()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 58
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getPriUrl()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->priUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getUpdateTime()Ljava/lang/String;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->updateTime:Ljava/lang/String;

    return-object v0
.end method

.method public setAppName(Ljava/lang/String;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appName:Ljava/lang/String;

    return-void
.end method

.method public setAppVersion(Ljava/lang/String;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appVersion:Ljava/lang/String;

    return-void
.end method

.method public setDevName(Ljava/lang/String;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->devName:Ljava/lang/String;

    return-void
.end method

.method public setPermDescAllList(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 70
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    return-void
.end method

.method public setPermDescList(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 54
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    return-void
.end method

.method public setPermDescOriList(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 62
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    return-void
.end method

.method public setPriUrl(Ljava/lang/String;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->priUrl:Ljava/lang/String;

    return-void
.end method

.method public setUpdateTime(Ljava/lang/String;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->updateTime:Ljava/lang/String;

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 3

    .line 132
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 134
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appName:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 135
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_APP_NAME:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 137
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 138
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    invoke-static {v2}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->arrayListArrayCovertToJsonArray(Ljava/util/ArrayList;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 141
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 142
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC_ORI:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    invoke-static {v2}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->arrayListArrayCovertToJsonArray(Ljava/util/ArrayList;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 145
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 146
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PERM_DESC_ALL:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    invoke-static {v2}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->arrayListArrayCovertToJsonArray(Ljava/util/ArrayList;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 149
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->priUrl:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 150
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_PRI_URL:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->priUrl:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 152
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->updateTime:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 153
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_UPD_TIME:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->updateTime:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 155
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appVersion:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 156
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_APP_VER:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appVersion:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 158
    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->devName:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 159
    sget-object v1, Lcom/mbridge/msdk/out/ApkDisplayInfo;->JSON_KEY_DEV_NAME:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->devName:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 163
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 165
    :cond_7
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-lez v1, :cond_8

    return-object v0

    :cond_8
    const/4 v0, 0x0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 119
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ApkDisplayInfo{appName=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", permDescJArray="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescList:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", permDescOriJArray="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescOriList:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", permDescAll="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->permDescAllList:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", priUrl=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->priUrl:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", updateTime=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->updateTime:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", appVersion=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->appVersion:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", devName=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/out/ApkDisplayInfo;->devName:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
