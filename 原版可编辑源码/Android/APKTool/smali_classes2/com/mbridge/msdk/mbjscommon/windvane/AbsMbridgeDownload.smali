.class public abstract Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;
.source "AbsMbridgeDownload.java"


# static fields
.field private static final HANDLER_WHAT_KEY:I = 0x1


# instance fields
.field private DEFAULT_PROGRESS_NOTIFY_INTERVAL:J

.field private JSON_KEY_AKDLUI:Ljava/lang/String;

.field private JSON_KEY_CAMPAIGN:Ljava/lang/String;

.field private JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL:Ljava/lang/String;

.field private JSON_KEY_PACKAGE_NAME:Ljava/lang/String;

.field private JSON_KEY_PROGRESS:Ljava/lang/String;

.field private JSON_KEY_STATUS:Ljava/lang/String;

.field private JSON_KEY_UNIQUE:Ljava/lang/String;

.field private JSON_KEY_URL:Ljava/lang/String;

.field private TAG:Ljava/lang/String;

.field private canNotifyProgress:Z

.field private currentObject:Ljava/lang/Object;

.field private downloadUrl:Ljava/lang/String;

.field private handler:Landroid/os/Handler;

.field private keyListenerMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/out/IDownloadListener;",
            ">;"
        }
    .end annotation
.end field

.field private mProgress:I

.field private mStatus:I

.field private packageName:Ljava/lang/String;

.field private progressNotifyInterval:J

.field private webView:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 23
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;-><init>()V

    const-string v0, "MbridgeDownload"

    .line 25
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    const-string v0, "akdlui"

    .line 30
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_AKDLUI:Ljava/lang/String;

    const-string v0, "progressNotifyInterval"

    .line 31
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL:Ljava/lang/String;

    const-string v0, "uniqueKey"

    .line 32
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_UNIQUE:Ljava/lang/String;

    const-string v0, "apkURL"

    .line 33
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_URL:Ljava/lang/String;

    const-string v0, "packageName"

    .line 34
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_PACKAGE_NAME:Ljava/lang/String;

    const-string v0, "status"

    .line 35
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_STATUS:Ljava/lang/String;

    const-string v0, "progress"

    .line 36
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_PROGRESS:Ljava/lang/String;

    const-string v0, "campaign"

    .line 37
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_CAMPAIGN:Ljava/lang/String;

    .line 40
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->keyListenerMap:Ljava/util/HashMap;

    const-wide/16 v0, 0x7d0

    .line 43
    iput-wide v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->DEFAULT_PROGRESS_NOTIFY_INTERVAL:J

    .line 44
    iput-wide v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->progressNotifyInterval:J

    const/4 v0, 0x1

    .line 46
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->canNotifyProgress:Z

    .line 48
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$1;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->handler:Landroid/os/Handler;

    return-void
.end method

.method static synthetic access$000(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Z
    .locals 0

    .line 23
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->canNotifyProgress:Z

    return p0
.end method

.method static synthetic access$002(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Z)Z
    .locals 0

    .line 23
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->canNotifyProgress:Z

    return p1
.end method

.method static synthetic access$100(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)I
    .locals 0

    .line 23
    iget p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->mStatus:I

    return p0
.end method

.method static synthetic access$102(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;I)I
    .locals 0

    .line 23
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->mStatus:I

    return p1
.end method

.method static synthetic access$200(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;ILjava/lang/String;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->onDownloadAPKStatusChange(ILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)I
    .locals 0

    .line 23
    iget p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->mProgress:I

    return p0
.end method

.method static synthetic access$302(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;I)I
    .locals 0

    .line 23
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->mProgress:I

    return p1
.end method

.method static synthetic access$400(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)J
    .locals 2

    .line 23
    iget-wide v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->progressNotifyInterval:J

    return-wide v0
.end method

.method static synthetic access$500(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Landroid/os/Handler;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->handler:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic access$600(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;ILjava/lang/String;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->onDownloadAPKProgressChange(ILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$700(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Ljava/lang/String;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$800(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Ljava/lang/String;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->downloadUrl:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$900(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;)Ljava/lang/Object;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    return-object p0
.end method

.method private addDownloadListening(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 9

    .line 332
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 334
    :try_start_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getiDownloadListenerByUniqueKey(Ljava/lang/String;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v0

    const-string v1, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 335
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 336
    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v4, 0x0

    new-array v5, v3, [Ljava/lang/Object;

    .line 337
    invoke-virtual {v2, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v4, "addDownloadListener"

    const/4 v5, 0x2

    new-array v6, v5, [Ljava/lang/Class;

    .line 338
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v3

    const-class v7, Lcom/mbridge/msdk/out/IDownloadListener;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    invoke-virtual {v1, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v4, v5, [Ljava/lang/Object;

    aput-object p2, v4, v3

    aput-object v0, v4, v8

    .line 339
    invoke-virtual {v1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 340
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 342
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 343
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p2, "uniqueKey is null"

    .line 346
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private addMultipleDownloaderListener(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 272
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    .line 273
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 276
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "akdluiList"

    .line 279
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 280
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 281
    :goto_0
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 282
    invoke-virtual {p2, v0}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v1

    .line 283
    invoke-direct {p0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->addDownloadListening(Ljava/lang/Object;Ljava/lang/String;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    const-string p2, "akdluiList is 0"

    .line 286
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const-string p2, "akdluiList is null"

    .line 289
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 293
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 294
    invoke-virtual {p2}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method private checkMustParamsAndFillDefaultIfNull(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1

    .line 263
    :try_start_0
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_0

    .line 264
    invoke-virtual {p1, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 267
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private getDownloadStatus(Ljava/lang/Object;Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 9

    const/4 v0, 0x0

    .line 200
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    .line 201
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 202
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 203
    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Object;

    .line 204
    invoke-virtual {v2, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v4, "getTaskStatusByUniqueKey"

    const/4 v5, 0x1

    new-array v6, v5, [Ljava/lang/Class;

    .line 206
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v3

    invoke-virtual {v1, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v4

    new-array v6, v5, [Ljava/lang/Object;

    aput-object p2, v6, v3

    .line 207
    invoke-virtual {v4, v2, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    const-string v6, "getTaskProgressByUniqueKey"

    new-array v7, v5, [Ljava/lang/Class;

    .line 209
    const-class v8, Ljava/lang/String;

    aput-object v8, v7, v3

    invoke-virtual {v1, v6, v7}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v5, v5, [Ljava/lang/Object;

    aput-object p2, v5, v3

    .line 210
    invoke-virtual {v1, v2, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    .line 211
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "status"

    .line 212
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->statusIntToString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "progress"

    .line 213
    invoke-virtual {v1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    return-object v1

    :cond_0
    const-string p2, "uniqueKey is null"

    .line 216
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 219
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_0
    return-object v0
.end method

.method private getUniqueKeyAndIntervalTimeFromCampaign(Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 4

    const-string v0, ""

    if-eqz p1, :cond_1

    .line 116
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_AKDLUI:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 117
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_AKDLUI:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 119
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 120
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL:Ljava/lang/String;

    iget-wide v2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->DEFAULT_PROGRESS_NOTIFY_INTERVAL:J

    invoke-virtual {p1, v1, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->progressNotifyInterval:J
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 123
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_1
    :goto_0
    return-object v0
.end method

.method private getUniqueKeyAndUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    .line 131
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 132
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 133
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_UNIQUE:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 134
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_URL:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->downloadUrl:Ljava/lang/String;

    .line 135
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_PACKAGE_NAME:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->packageName:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p1, ""

    :goto_0
    return-object p1
.end method

.method private getiDownloadListenerByUniqueKey(Ljava/lang/String;)Lcom/mbridge/msdk/out/IDownloadListener;
    .locals 2

    .line 61
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->keyListenerMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 62
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->keyListenerMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/out/IDownloadListener;

    return-object p1

    .line 64
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$2;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Ljava/lang/String;)V

    .line 105
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->keyListenerMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method private onDownloadAPKProgressChange(ILjava/lang/String;)V
    .locals 2

    .line 438
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 439
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_UNIQUE:Ljava/lang/String;

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 440
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_URL:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->downloadUrl:Ljava/lang/String;

    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 441
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_PROGRESS:Ljava/lang/String;

    invoke-virtual {v0, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 442
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 p2, 0x2

    invoke-static {p1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 443
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    instance-of p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz p2, :cond_0

    .line 444
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 445
    iget-object v0, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    iget-object v0, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 446
    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$4;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$4;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 456
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private onDownloadAPKStatusChange(ILjava/lang/String;)V
    .locals 2

    .line 413
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 414
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_UNIQUE:Ljava/lang/String;

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 415
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_URL:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->downloadUrl:Ljava/lang/String;

    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 416
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_STATUS:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->statusIntToString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 417
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 p2, 0x2

    invoke-static {p1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 418
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    instance-of p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz p2, :cond_0

    .line 419
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 420
    iget-object v0, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    iget-object v0, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_0

    .line 421
    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload$3;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 432
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private parseActionEvent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 463
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 464
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 465
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_CAMPAIGN:Ljava/lang/String;

    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 466
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_CAMPAIGN:Ljava/lang/String;

    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 470
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private statusIntToString(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_4

    const/4 v0, 0x2

    if-eq p1, v0, :cond_3

    const/4 v0, 0x5

    if-eq p1, v0, :cond_2

    const/4 v0, 0x6

    if-eq p1, v0, :cond_2

    const/16 v0, 0x8

    if-eq p1, v0, :cond_1

    const/16 v0, 0x9

    if-eq p1, v0, :cond_0

    const-string p1, "undownload"

    goto :goto_0

    :cond_0
    const-string p1, "installed"

    goto :goto_0

    :cond_1
    const-string p1, "fail"

    goto :goto_0

    :cond_2
    const-string p1, "pause"

    goto :goto_0

    :cond_3
    const-string p1, "downloading"

    goto :goto_0

    :cond_4
    const-string p1, "success"

    :goto_0
    return-object p1
.end method


# virtual methods
.method public activateAPK(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 385
    :try_start_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getUniqueKeyAndUrl(Ljava/lang/String;)Ljava/lang/String;

    .line 386
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->parseActionEvent(Ljava/lang/Object;Ljava/lang/String;)V

    .line 387
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 389
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public addDownloaderListener(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 302
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "====before---params:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "=====AbsMbridgeDownload"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 304
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    .line 306
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 309
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 312
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getUniqueKeyAndIntervalTimeFromCampaign(Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object v2

    .line 314
    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->JSON_KEY_AKDLUI:Ljava/lang/String;

    const-string v4, ""

    invoke-direct {p0, v0, v3, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->checkMustParamsAndFillDefaultIfNull(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v3, "atat_type"

    const/4 v4, 0x0

    .line 315
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-direct {p0, v0, v3, v5}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->checkMustParamsAndFillDefaultIfNull(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v3, "ntbarpasbl"

    .line 316
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-direct {p0, v0, v3, v5}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->checkMustParamsAndFillDefaultIfNull(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v3, "ntbarpt"

    .line 317
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-direct {p0, v0, v3, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->checkMustParamsAndFillDefaultIfNull(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 318
    invoke-direct {p0, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->addDownloadListening(Ljava/lang/Object;Ljava/lang/String;)V

    .line 319
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 322
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 323
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 327
    :cond_0
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "====end--params:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object p2
.end method

.method public getDownloadAPKStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    .line 187
    :try_start_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getUniqueKeyAndUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 188
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getDownloadStatus(Ljava/lang/Object;Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 190
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccessWithData(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 193
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 194
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public getMultipleDownloadAPKStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    const-string v0, "uniqueKey"

    const-string v1, "downloaderList"

    .line 140
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    .line 141
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 144
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 147
    new-instance p2, Lorg/json/JSONArray;

    invoke-direct {p2}, Lorg/json/JSONArray;-><init>()V

    .line 148
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 149
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-lez v3, :cond_1

    const/4 v3, 0x0

    .line 150
    :goto_0
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_3

    .line 151
    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 153
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 154
    invoke-direct {p0, p1, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getDownloadStatus(Ljava/lang/Object;Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    if-eqz v5, :cond_0

    .line 156
    invoke-virtual {v5, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    invoke-virtual {p2, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    const-string v0, "downloaderList is 0"

    .line 162
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    const-string v0, "downloaderList is null"

    .line 165
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 167
    :cond_3
    :goto_1
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_5

    .line 168
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 169
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 170
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccessWithData(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p2

    .line 175
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 176
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_2

    :cond_4
    const-string p2, "params is null"

    .line 180
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_5
    :goto_2
    return-void
.end method

.method public installAPK(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 374
    :try_start_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getUniqueKeyAndUrl(Ljava/lang/String;)Ljava/lang/String;

    .line 375
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->parseActionEvent(Ljava/lang/Object;Ljava/lang/String;)V

    .line 376
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 378
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 379
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public pauseDownloadAPK(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 8

    .line 396
    :try_start_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getUniqueKeyAndUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 397
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getInstance"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 398
    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const/4 v4, 0x0

    new-array v5, v3, [Ljava/lang/Object;

    .line 399
    invoke-virtual {v2, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v4, "pause"

    const/4 v5, 0x1

    new-array v6, v5, [Ljava/lang/Class;

    .line 401
    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v3

    invoke-virtual {v1, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v4, v5, [Ljava/lang/Object;

    aput-object v0, v4, v3

    .line 402
    invoke-virtual {v1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 403
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->parseActionEvent(Ljava/lang/Object;Ljava/lang/String;)V

    .line 404
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 406
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 407
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public restartDownloadAPK(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 10

    .line 350
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->currentObject:Ljava/lang/Object;

    .line 352
    :try_start_0
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getUniqueKeyAndUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 353
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->getiDownloadListenerByUniqueKey(Ljava/lang/String;)Lcom/mbridge/msdk/out/IDownloadListener;

    move-result-object v1

    const-string v2, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 354
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v3, "getInstance"

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    .line 355
    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const/4 v5, 0x0

    new-array v6, v4, [Ljava/lang/Object;

    .line 356
    invoke-virtual {v3, v5, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v5, "addDownloadListener"

    const/4 v6, 0x2

    new-array v7, v6, [Ljava/lang/Class;

    .line 358
    const-class v8, Ljava/lang/String;

    aput-object v8, v7, v4

    const-class v8, Lcom/mbridge/msdk/out/IDownloadListener;

    const/4 v9, 0x1

    aput-object v8, v7, v9

    invoke-virtual {v2, v5, v7}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    new-array v7, v6, [Ljava/lang/Object;

    aput-object v0, v7, v4

    aput-object v1, v7, v9

    .line 359
    invoke-virtual {v5, v3, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "start"

    new-array v5, v6, [Ljava/lang/Class;

    .line 361
    const-class v7, Ljava/lang/String;

    aput-object v7, v5, v4

    const-class v7, Ljava/lang/String;

    aput-object v7, v5, v9

    invoke-virtual {v2, v1, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v6, [Ljava/lang/Object;

    aput-object v0, v2, v4

    .line 362
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->downloadUrl:Ljava/lang/String;

    aput-object v0, v2, v9

    invoke-virtual {v1, v3, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 363
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->parseActionEvent(Ljava/lang/Object;Ljava/lang/String;)V

    .line 364
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 366
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->TAG:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 367
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public abstract sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
.end method
