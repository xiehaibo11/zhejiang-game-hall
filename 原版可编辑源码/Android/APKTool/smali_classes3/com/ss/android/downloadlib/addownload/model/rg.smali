.class public Lcom/ss/android/downloadlib/addownload/model/rg;
.super Ljava/lang/Object;


# instance fields
.field public c:Ljava/lang/String;

.field public df:J

.field public fw:Ljava/lang/String;

.field public pp:Ljava/lang/String;

.field public pt:Ljava/lang/String;

.field public q:J

.field public rg:J

.field public volatile ux:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(JJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    iput-wide p1, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->rg:J

    .line 28
    iput-wide p3, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->df:J

    .line 29
    iput-wide p5, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->q:J

    .line 30
    iput-object p7, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->pt:Ljava/lang/String;

    .line 31
    iput-object p8, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->pp:Ljava/lang/String;

    .line 32
    iput-object p9, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->c:Ljava/lang/String;

    .line 33
    iput-object p10, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->fw:Ljava/lang/String;

    return-void
.end method

.method public static rg(Lorg/json/JSONObject;)Lcom/ss/android/downloadlib/addownload/model/rg;
    .locals 4

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 61
    :cond_0
    new-instance v1, Lcom/ss/android/downloadlib/addownload/model/rg;

    invoke-direct {v1}, Lcom/ss/android/downloadlib/addownload/model/rg;-><init>()V

    :try_start_0
    const-string v2, "mDownloadId"

    .line 63
    invoke-static {p0, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->rg:J

    const-string v2, "mAdId"

    .line 64
    invoke-static {p0, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->df:J

    const-string v2, "mExtValue"

    .line 65
    invoke-static {p0, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->q:J

    const-string v2, "mPackageName"

    .line 66
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->pt:Ljava/lang/String;

    const-string v2, "mAppName"

    .line 67
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->pp:Ljava/lang/String;

    const-string v2, "mLogExtra"

    .line 68
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->c:Ljava/lang/String;

    const-string v2, "mFileName"

    .line 69
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->fw:Ljava/lang/String;

    const-string v2, "mTimeStamp"

    .line 70
    invoke-static {p0, v2}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/ss/android/downloadlib/addownload/model/rg;->ux:J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p0

    .line 72
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method


# virtual methods
.method public rg()Lorg/json/JSONObject;
    .locals 4

    .line 41
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "mDownloadId"

    .line 43
    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->rg:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mAdId"

    .line 44
    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->df:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mExtValue"

    .line 45
    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->q:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "mPackageName"

    .line 46
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->pt:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mAppName"

    .line 47
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->pp:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mLogExtra"

    .line 48
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mFileName"

    .line 49
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->fw:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mTimeStamp"

    .line 50
    iget-wide v2, p0, Lcom/ss/android/downloadlib/addownload/model/rg;->ux:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 52
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method
